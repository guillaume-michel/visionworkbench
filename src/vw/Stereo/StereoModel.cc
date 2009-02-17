// __BEGIN_LICENSE__
// Copyright (C) 2006, 2007 United States Government as represented by
// the Administrator of the National Aeronautics and Space Administration.
// All Rights Reserved.
// __END_LICENSE__


#include <vw/Stereo/StereoModel.h>
#include <vw/Math/Vector.h>

using namespace std;

namespace vw {
namespace stereo {

  Vector3 StereoModel::operator()(Vector2 const& pix1, Vector2 const& pix2, double& error ) const {
    
    
    try {
      // determine range by triangulation
      Vector3 vecFromA = m_camera1->pixel_to_vector(pix1);
      Vector3 vecFromB = m_camera2->pixel_to_vector(pix2);

      // If vecFromA and vecFromB are nearly parallel, there will be
      // very large numerical uncertainty about where to place the
      // point.  We set a threshold here to reject points that are
      // on nearly parallel rays.  The threshold of 1e-4 corresponds
      // to a convergence of less than theta = 0.81 degrees, so if
      // the two rays are within 0.81 degrees of being parallel, we
      // reject this point.  
      //
      // This threshold was chosen empirically for now, but should
      // probably be revisited once a more rigorous analysis has
      // been completed. -mbroxton (11-MAR-07)
      if ( 1-dot_prod(vecFromA, vecFromB) < 1e-4) {
        error = 0;
        return Vector3();
      }

      Vector3 originA = m_camera1->camera_center(pix1);
      Vector3 originB = m_camera2->camera_center(pix2);
      Vector3 result =  triangulate_point(originA, vecFromA,
                                          originB, vecFromB, 
                                          error);
      
      // Reflect points that fall behind one of the two cameras
      if ( dot_prod(result - originA, vecFromA) < 0 || 
           dot_prod(result - originB, vecFromB) < 0 ) {
        result = -result + 2*originA;
      }
      
      return result;
      
    } catch (vw::camera::PixelToRayErr &e) {
      error = 0;
      return Vector3();
    }
  }
  
  ImageView<Vector3> StereoModel::operator()(ImageView<PixelDisparity<double> > const& disparity_map,
                                             ImageView<double> &error) {

    // Error analysis
    double mean_error = 0.0;
    double max_error = 0.0;
    int point_count = 0;
    int divergent = 0;
    
    // Allocate xyz image and get pointer to buffer
    ImageView<Vector3> xyz(disparity_map.cols(), disparity_map.rows());
    error.set_size(disparity_map.cols(), disparity_map.rows());
        
    // Compute 3D position for each pixel in the disparity map
    cout << "StereoModel: Applying camera models\n";
    for (int32 y = 0; y < disparity_map.rows(); y++) {
      if (y % 100 == 0) {
        printf("\tStereoModel computing points: %0.2f%% complete.\r", 100.0f*float(y)/disparity_map.rows());
        fflush(stdout);      
      }
      for (int32 x = 0; x < disparity_map.cols(); x++) {
        if ( !disparity_map(x,y).missing() ) {
          xyz(x,y) = (*this)(Vector2( x, y ),
                             Vector2( x + disparity_map(x,y).h(),
                                      y + disparity_map(x,y).v() ), 
                             error(x,y) );          

          if (error(x,y) >= 0) {
            // Keep track of error statistics
            if (error(x,y) > max_error)
              max_error = error(x,y);
            mean_error += error(x,y);
            ++point_count;
          } else {	   
            // rays diverge or are parallel
            xyz(x,y) = Vector3();
            divergent++;
          }
        } else {
          xyz(x,y) = Vector3();
          error(x,y) = 0;
        }
      }
    }  
    
    if (divergent != 0) 
      cout << "WARNING in StereoModel: " << divergent << " rays diverged or were parallel!\n";
     
    cout << "\tStereoModel computing points: Done.                  \n";
    cout << "\tMean error = " << mean_error/double(point_count)
         << ",  Max error = " << max_error << endl;
    return xyz;
  }

  double StereoModel::convergence_angle(Vector2 const& pix1, Vector2 const& pix2) const {
      Vector3 vecFromA = m_camera1->pixel_to_vector(pix1);
      Vector3 vecFromB = m_camera2->pixel_to_vector(pix2);
      return acos(dot_prod(vecFromA, vecFromB));
  }    
}} // namespace vw::stereo
