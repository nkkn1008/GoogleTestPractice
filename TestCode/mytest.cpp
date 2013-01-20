#include "../gtest-1.6.0/include/gtest/gtest.h"
#include "../LIB/Sample.h"

#include <memory>

TEST(firstTest, abs)
{
	EXPECT_EQ(1, abs( -1 ));
	EXPECT_EQ(1, abs( 1 ));
}

TEST(SmartPoiter, Test1_CallConstract)
{
	CSample sample(100);
	std::cout << "Back from Create()" << std::endl;

	EXPECT_EQ(1,1);
}

TEST(SmartPoiter, Test2_SampleFactory)
{
	CSampleFactory factory;   
	std::auto_ptr<CSample> p = factory.Create(100);
	
	EXPECT_EQ(p->GetNum(),100);
}

