#include "../gtest-1.6.0/include/gtest/gtest.h"
#include "../LIB/Bridge.h"

#include <memory>

TEST(Bridge, Test1_CallConstract)
{

	Customers *customers = new Customers("Chicago");
	customers->Data(new CustomerData());

	customers->Show();
	customers->Next();
	customers->Show();
	customers->Next();
	customers->Show();
	customers->Add("Henry Valasquez");
  
	customers->ShowAll();

	delete customers->Data();
	delete customers;
	EXPECT_EQ(1,1);
}


