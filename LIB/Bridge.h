#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class DataObject
{
public:
	DataObject(){}
	virtual ~DataObject(){}
	virtual void NextRecord() = 0;
	virtual void PriorRecord() = 0;
	virtual void AddRecord(std::string name) = 0;
	virtual void DeleteRecord(std::string name) = 0;
	virtual std::string ShowRecord() = 0;
	virtual void ShowAllRecords() = 0;
};

class CustomerBase {
private:
  DataObject* data_object_;
  
protected:
  std::string group_;
  
public:
  CustomerBase(std::string group)
    : group_(group)
  {}

  void Data(DataObject* data) {
    data_object_ = data;
  }
  
  DataObject* Data() {
    return data_object_;
  }

  virtual void Next() {
    data_object_->NextRecord();
  }

  virtual void Prior() {
    data_object_->PriorRecord();
  }

  virtual void Add(std::string customer) {
    data_object_->AddRecord(customer);
  }

  virtual void Delete(std::string customer) {
    data_object_->DeleteRecord(customer);
  }

  virtual void Show() {
    data_object_->ShowRecord();
  }

  virtual void ShowAll() {
    std::cout << "Customer Group: " << group_ << std::endl;
    data_object_->ShowAllRecords();
  }
};

class Customers : public CustomerBase {
public:
  Customers(std::string group)
    : CustomerBase(group)
  {}

  virtual void ShowAll() {
    std::cout << std::endl << "--------------------" << std::endl;
    CustomerBase::ShowAll();
    std::cout << "--------------------" << std::endl;
  }
};

class CustomerData : public DataObject
{
  private:
	std::vector<std::string> customers_;
	int current_;
	
  public:
	CustomerData();
	virtual void NextRecord();
	virtual void PriorRecord();
	virtual void AddRecord(std::string customer);
	virtual void DeleteRecord(std::string custom);
	virtual std::string ShowRecord();
	virtual void ShowAllRecords();
};
