#include "../gtest-1.6.0/include/gtest/gtest.h"
#include "../LIB/Strategy.h"

#include <memory>


TEST(Strategy, Test1_CallConstract)
{
	SortedList student_records;
	
	student_records.Add("Samuel");
	student_records.Add("Jimmy");
	student_records.Add("Sandre");
	student_records.Add("Vivek");
	student_records.Add("Anna");

	EXPECT_STREQ(student_records.Get(0).c_str(), "Samuel");
	student_records.SetSortStrategy(new QuickSort());
	student_records.Sort();
	EXPECT_STREQ(student_records.Get(0).c_str(), "Anna");


	EXPECT_EQ(1,1);
}


