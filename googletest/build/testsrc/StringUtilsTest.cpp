#include <gtest/gtest.h>
#include "StringUtils.h"

TEST(StringUtilsTest, SliceTets){
  std::string Mystring = "Hello";
  EXPECT_EQ(StringUtils::Slice(Mystring, 1),"ello");
}

TEST(StringUtilsTest, Capitalize){

}

TEST(StringUtilsTest, Upper){

}

TEST(StringUtilsTest, Lower){

}

TEST(StringUtilsTest, LStrip){

}
