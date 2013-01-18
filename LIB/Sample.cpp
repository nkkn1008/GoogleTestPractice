#include <iostream>
#include <Sample.h>

int hoge()
{
	return 0;
}

CSample::CSample(int num)
{
	m_num = num;
	printf("Called Constract");
	//std::cout << "Constracta"@<< std::endl; 
}

CSample::~CSample()
{
	printf("Called Destract\n");	
}
