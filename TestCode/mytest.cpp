#include "../gtest-1.6.0/include/gtest/gtest.h"
#include "../LIB/Sample.h"

#include <memory>

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

TEST(SmartPoiter, CallConstracta)
{
	CSample sample(100);
	printf("Create() Finished");

	EXPECT_EQ(1,1);
}
