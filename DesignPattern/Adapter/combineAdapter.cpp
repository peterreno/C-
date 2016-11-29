/***********************************
    > File Name: combineAdapter.cpp
  > Author: wangqiang
  > Mail: wangqiang@cmos.net
  > Created Time: 2016年11月28日 星期一 17时17分40秒
 **************************/

#include<iostream>
using namespace std;

class Target
{
public:
	Target(){}
	virtual ~Target() {}
	virtual void Request()
	{
		cout<<"Target:Request"<<endl;
	}
};

class Adaptee
{
public:
	Adaptee(){}
	~Adaptee(){}
	void SpecificRequest()
	{
		cout<<"Adaptee::SpecificRequest"<<endl;
	}
};

class Adapter: public Target
{
public:
	Adapter(Adaptee* ade)
	{
		this->_ade = ade;
	}
	~Adapter() {}
	void Request()
	{
		_ade->SpecificRequest();
	}
private:
	Adaptee* _ade;
};

int main()
{
	Adaptee *ade = new Adaptee();
	Target* adt = new Adapter(ade);
	adt->Request();
	return 0;
}


