#include "../gtest-1.6.0/include/gtest/gtest.h"
#include <vector>

TEST(vectorTest, test1)
{
	std::vector<int> v(5,1);
	EXPECT_EQ(1, v.at(1));
	EXPECT_EQ(1, 1);	
}

