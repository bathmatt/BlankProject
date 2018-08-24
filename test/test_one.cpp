#include "test_func.hpp"

#include <gtest/gtest.h>

int main(int argc, char **argv) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}


TEST(MyGroup, pass) {

  EXPECT_EQ(return_one(), 1);

}

TEST(MyGroup, false) {

  EXPECT_EQ(return_one(), 0);

}
