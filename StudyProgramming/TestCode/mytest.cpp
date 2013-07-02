#include "../../gtest-1.6.0/include/gtest/gtest.h"

#include <memory>

TEST(firstTest, abs)
{
	EXPECT_EQ(1, abs( -1 ));
	EXPECT_EQ(1, abs( 1 ));
}

