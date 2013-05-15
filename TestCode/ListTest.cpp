#include "../gtest-1.6.0/include/gtest/gtest.h"
#include <list>
#include <stdlib.h>

TEST(ListTest, test_pushback)
{
	std::list<char> lst1, lst2, lst3;
	char test_array1[] = {'A','C','E','G','I'};
	char test_array2[] = {'B','D','F','H','J'};
	
	std::list<char> TestList1(test_array1, test_array1+sizeof(test_array1)/sizeof(*test_array1));
	std::list<char> TestList2(test_array2, test_array2+sizeof(test_array2)/sizeof(*test_array2));
	
	for(int i=0; i<10; i+=2)
	{
		lst1.push_back(i+ 'A' );
		lst2.push_back(i+1+'A');		
	}	
	EXPECT_EQ(lst1,TestList1);
	EXPECT_EQ(lst2,TestList2);	
}

TEST(ListTest, test_merge)
{
	std::list<char> lst1, lst2, lst3;
	char test_array1[] = {'A','B','C','D','E','F','G','H','I','J'};
	std::list<char> TestList1(test_array1, test_array1+sizeof(test_array1)/sizeof(*test_array1));
	
	for(int i=0; i<10; i+=2)
	{
		lst1.push_back(i+ 'A' );
		lst2.push_back(i+1+'A');		
	}

	EXPECT_FALSE(lst2.empty());
	lst1.merge(lst2);
	EXPECT_TRUE(lst2.empty());

	EXPECT_EQ(lst1, TestList1);	   
}

