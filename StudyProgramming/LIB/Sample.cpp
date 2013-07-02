#include <iostream>
#include <Sample.h>

CSample::CSample(int num)
{
	m_num = num;
	std::cout << "Sample Class Constract" << std::endl;
}

CSample::~CSample()
{
	std::cout << "Sample Class Destract" << std::endl;	
}

std::auto_ptr<CSample> CSampleFactory::Create(int num)
{
	std::cout << "Call CSampleFactory::Create" << std::endl;
	std::auto_ptr<CSample>p (new CSample(num));

	return p;
}
