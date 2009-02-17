// __BEGIN_LICENSE__
// Copyright (C) 2006, 2007 United States Government as represented by
// the Administrator of the National Aeronautics and Space Administration.
// All Rights Reserved.
// __END_LICENSE__


// TestBlockFileIO.h
#define CXXTEST_ABORT_TEST_ON_FAIL
#include <cxxtest/TestSuite.h>
#include <string>
#include <vw/FileIO/DiskImageResource.h>

#include <vw/Image.h>
#include <vw/FileIO.h>
#include <vw/FileIO/DiskImageView.h>
using namespace vw;

static void test_read_crop(const char *fn)
{
    set_debug_level(DebugMessage);

    DiskImageResource *dir = 0;
    TS_ASSERT_THROWS_NOTHING( dir = DiskImageResource::open( fn ) );

    std::string crop_name("cropped.");
    crop_name += fn;

    ImageView<PixelRGB<uint8> > image;
    read_image( image, *dir, BBox2i(100,100,100,100) );
    write_image( crop_name, image );
}

class TestDiskImageResource : public CxxTest::TestSuite
{
public:

  void test_png_crop() {
    test_read_crop("mural.png");
  }

  void test_jpg_crop() {
    test_read_crop("mural.jpg");
  }

  void test_tif_post_crop()
  {
    DiskImageResource *dir = 0;
    TS_ASSERT_THROWS_NOTHING( dir = DiskImageResource::open( "mural.png" ) );

    ImageView<PixelRGB<uint8> > image;
    TS_ASSERT_THROWS_NOTHING( read_image( image, *dir ) );
    write_image( "mural.tif", image );
    DiskImageView<PixelRGB<uint8> > div( "mural.tif" );
    ImageView<PixelRGB<uint8> > result = crop(div,100,100,100,100);
    write_image( "cropped.mural.tif", result );
  }

}; // class TestBlockFileIO
