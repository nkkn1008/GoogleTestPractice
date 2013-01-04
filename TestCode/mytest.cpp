#include "/Users/centvilla29/Documents/src/CPP/gtest-1.6.0/include/gtest/gtest.h"

TEST(firstTest, abs)
{
  EXPECT_EQ(1, abs( -1 ));
  EXPECT_EQ(1, abs( 1 ));
}

