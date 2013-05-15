#include "../gtest-1.6.0/include/gtest/gtest.h"
#include <vector>

TEST(vectorTest, test1)
{
	std::vector<int> v(5,1);
	EXPECT_EQ(1, v.at(1));
	EXPECT_EQ(1, 1);	
}


TEST(vectorTest, SizeTest)
{
	std::vector<int> vect(10);
	EXPECT_EQ(vect.size(),10);

	for (int i=0;i<5;i++)
	{
		vect.push_back(i+11);
	}

	EXPECT_EQ(vect.at(10),11);
	EXPECT_EQ(vect.size(),15);
}

TEST(vectorTest, AddTest)
{
	std::vector<int> vect(10);

	for (int i=0;i<5;i++)
	{
		vect.push_back(i+11);
	}

	EXPECT_EQ(vect.at(10),11);
	EXPECT_EQ(vect.size(),15);
}

TEST(vectorTest, DeleteTest)
{
	std::vector<char> v;

	for(int i =0; i< 10; i++)
	{
		v.push_back(i+'A');
	}
	EXPECT_EQ(v.size(),10);

	do{
		v.pop_back();
		
	}while( !v.empty());

	EXPECT_EQ(v.size(),0);
}

TEST(vectorTest, Iterator)
{
	std::vector<int> vect(10);

	std::vector<int>::iterator p; // ”½•œŽq
	std::vector<int>::iterator p2; // ”½•œŽq	
	std::vector<int>::iterator test_p;
	std::vector<int>::iterator test_p2;
	
	int i = 1;
	p = vect.begin();
	while(p != vect.end())
	{
		*p = i;
		p++;
		i++;
	}
	p2 = vect.begin();
	p2 += 2;
	std::cout << "Contentso of p2:" << *p2 << std::endl;
	test_p = vect.insert(p2, 99);

	for(std::vector<int>::iterator lp = vect.begin(); lp!= vect.end(); lp++)
	{
		std::cout << *lp << " ";
	}
	std::cout << std::endl;

	
	test_p2 = vect.erase(test_p,test_p+1);
	for(std::vector<int>::iterator lp = vect.begin(); lp!= vect.end(); lp++)
	{
		std::cout << *lp << " ";
	}
	std::cout << std::endl;

	EXPECT_EQ(*test_p, 3);
}
