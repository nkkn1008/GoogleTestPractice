#include "/Users/centvilla29/Documents/src/CPP/gtest-1.6.0/include/gtest/gtest.h"
#include "../LIB/Sample.h"

TEST(firstTest, abs)
{
	EXPECT_EQ(1, abs( -1 ));
	EXPECT_EQ(1, abs( 1 ));
}

TEST(firstTest, linklib)
{
	int ret = -1;

	ret = hoge();
	EXPECT_EQ(0, ret);	   
}
