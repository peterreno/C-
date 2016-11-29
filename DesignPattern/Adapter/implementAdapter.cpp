/***********************************
    > File Name: implementAdapter.cpp
  > Author: wangqiang
  > Mail: wangqiang@cmos.net
  > Created Time: 2016年11月28日 星期一 17时10分27秒
 **************************/

#include<iostream>
using namespace std;

class Target
{
public:
	Target() {}
	virtual ~Target() {}
	virtual void Request() 
	{
		cout<<"Target:Request"<<endl;
	}
};

class Adaptee
{
public:
	Adaptee() {}
	~Adaptee() {}
	void SpecificRequest()
	{
		cout<<"Adaptee:SpecificRequest"<<endl;
	}
};

class Adapter: public Target, private Adaptee
{
public:
	Adapter(){}
	~Adapter(){}
	void Request()
	{
		this->SpecificRequest();
	}
};

int main()
{
	Target* adt = new Adapter();
	adt->Request();
	return 0;
}
