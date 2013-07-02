#ifndef SAMPLE_H
#define SAMPLE_H

// Add Comment for GitHub

class CSample
{
public:
    CSample(int num);
    virtual ~CSample();
	int const GetNum(){return m_num;}
	
private:
	int m_num;	
};

class CSampleFactory
{
public:
	CSampleFactory(){};
	virtual ~CSampleFactory(){};
	std::auto_ptr<CSample> Create(int num);
};
#endif
