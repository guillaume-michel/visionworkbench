// __BEGIN_LICENSE__
// Copyright (C) 2006, 2007 United States Government as represented by
// the Administrator of the National Aeronautics and Space Administration.
// All Rights Reserved.
// __END_LICENSE__


// TestTransform.h
#include <cxxtest/TestSuite.h>

#include <vw/Image/ImageView.h>
#include <vw/Image/Transform.h>

using namespace vw;

class TestTransform : public CxxTest::TestSuite
{
public:

  template <template<class> class TraitT, class T>
  static bool bool_trait( T const& arg ) {
    return TraitT<T>::value;
  }

  void testBBoxComputation()
  {
    ImageView<double> im(2,3); im(0,0)=1; im(1,0)=2; im(0,1)=3; im(1,1)=4; im(0,2)=5; im(1,2)=6;
    TransformView<InterpolationView<EdgeExtensionView<ImageView<double>, ZeroEdgeExtension>, BilinearInterpolation>, TranslateTransform> im2 = transform(im, TranslateTransform(1,1));

//     TS_TRACE(stringify(compute_transformed_bbox(im, TranslateTransform(1,1))));
//     TS_TRACE(stringify(compute_transformed_bbox_fast(im, TranslateTransform(1,1))));

  }


  void testTranslateTransform()
  {
    ImageView<double> im(2,3); im(0,0)=1; im(1,0)=2; im(0,1)=3; im(1,1)=4; im(0,2)=5; im(1,2)=6;
    ImageView<double> im3 = transform(im, TranslateTransform(1,1));
    TransformView<InterpolationView<EdgeExtensionView<ImageView<double>, ZeroEdgeExtension>, BilinearInterpolation>, TranslateTransform> im2 = transform(im, TranslateTransform(1,1));
    TS_ASSERT_EQUALS( im2.cols(), 2 );
    TS_ASSERT_EQUALS( im2.rows(), 3 );
    TS_ASSERT_EQUALS( im2(1,1), 1 );
    TS_ASSERT_EQUALS( im2(0,0), 0 );
    TS_ASSERT_EQUALS( im2(1,2), 3 );
    TS_ASSERT_EQUALS( im2(-1,-1), 0 );
    TS_ASSERT_EQUALS( im2(-100,-100), 0 );

    // Test accessor
    TS_ASSERT_EQUALS( *(im2.origin().advance(1,1)), 1 );
    TS_ASSERT_EQUALS( *(im2.origin().advance(-1,-1)), 0 );

    // Test the traits
    TS_ASSERT( bool_trait<IsFloatingPointIndexable>( im2 ) );
    TS_ASSERT( bool_trait<IsFloatingPointIndexable>( transform(im, TranslateTransform(1,1)) ) );
    TS_ASSERT( !bool_trait<IsMultiplyAccessible>( transform(im, TranslateTransform(1,1)) ) );
  }

  void testTranslateFunction()
  {
    ImageView<double> im(2,3); im(0,0)=1; im(1,0)=2; im(0,1)=3; im(1,1)=4; im(0,2)=5; im(1,2)=6;
    ImageView<double> im2;
    // FIXME This test exhibits a Heisenbug on gc.cs.cmu.edu when used
    // with the default BilinearInterpolation (Red Hat gcc 4.0.2-8).
    // Attempts at replicating the bug in other contexts fail, so we
    // just work around it here for the moment.
    im2 = translate(im,1.0,1.0,ZeroEdgeExtension(),NearestPixelInterpolation());
    TS_ASSERT_EQUALS( im2.cols(), 2 );
    TS_ASSERT_EQUALS( im2.rows(), 3 );
    TS_ASSERT_EQUALS( im2(1,1), 1 );
    TS_ASSERT_EQUALS( im2(0,0), 0 );
    TS_ASSERT_EQUALS( im2(1,2), 3 );
    im2 = translate(im,1,1);
    TS_ASSERT_EQUALS( im2.cols(), 2 );
    TS_ASSERT_EQUALS( im2.rows(), 3 );
    TS_ASSERT_EQUALS( im2(1,1), 1 );
    TS_ASSERT_EQUALS( im2(0,0), 0 );
    TS_ASSERT_EQUALS( im2(1,2), 3 );
  }

  template <class ImageT>
  void print_image(ImageT & image) {
    for (int i = 0; i < image.cols(); i++) {
      for (int j = 0; j < image.rows(); j++) {
        TS_TRACE(stringify(image(i,j)));
      }
    }
  }

  void testResample()
  {
    ImageView<double> im(2,3); im(0,0)=1; im(1,0)=2; im(0,1)=3; im(1,1)=4; im(0,2)=5; im(1,2)=6;
    TransformView<InterpolationView<EdgeExtensionView<ImageView<double>, ConstantEdgeExtension>, BilinearInterpolation>, ResampleTransform> im2 = resample(im, 2, 2);
    TS_ASSERT_EQUALS( im2.cols(), 4 );
    TS_ASSERT_EQUALS( im2.rows(), 6 );
    TS_ASSERT_EQUALS( im2(0,0), 1 );
    TS_ASSERT_EQUALS( im2(2,2), 4 );
    TS_ASSERT_EQUALS( im2(1,1), 2.5 );
    TS_ASSERT_EQUALS( im2(-1,-1), 1 );
    TS_ASSERT_EQUALS( im2(-100,-100), 1 );
    TS_ASSERT_EQUALS( im2(100,100), 6 );

    // Test accessor
    TS_ASSERT_EQUALS( *(im2.origin().advance(0,0)), 1 );
    TS_ASSERT_EQUALS( *(im2.origin().advance(-1,-1)), 1 );

    // Test the traits
    TS_ASSERT( bool_trait<IsFloatingPointIndexable>( im2 ) );
    TS_ASSERT( bool_trait<IsFloatingPointIndexable>( transform(im, ResampleTransform(1,1)) ) );
    TS_ASSERT( !bool_trait<IsMultiplyAccessible>( transform(im, ResampleTransform(1,1)) ) );
  }


};
