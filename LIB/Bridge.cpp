#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Bridge.h"

CustomerData::CustomerData(): current_(0)
{
    customers_.push_back("Jim Jones");
    customers_.push_back("Samual Jackson");
    customers_.push_back("Allen Good");
    customers_.push_back("Ann Stills");
    customers_.push_back("Lisa Giolani");
}
  
void CustomerData::NextRecord()
{
    if(current_ < customers_.size() - 1)
	{
		++current_;
    }
}

void CustomerData::PriorRecord()
{
    if(current_ > 0)
	{
		--current_;
    }
}

void CustomerData::AddRecord(std::string customer)
{
    customers_.push_back(customer);
}

void CustomerData::DeleteRecord(std::string custom)
{
    std::vector<std::string>::iterator it =
		find(customers_.begin(), customers_.end(), custom);
    if(it != customers_.end())
	{
      customers_.erase(it);
	}
}

std::string CustomerData::ShowRecord()
{
    return customers_.at(current_);
	//std::cout << customers_.at(current_) << std::endl;
}

void CustomerData::ShowAllRecords()
{
	std::cout << "ShowAllRecords:" << std::endl;
	std::vector<std::string>::iterator it =  customers_.begin();
	while( it != customers_.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
}

