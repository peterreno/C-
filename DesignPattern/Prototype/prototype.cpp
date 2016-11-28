/***********************************
    > File Name: prototype.cpp
  > Author: wangqiang
  > Mail: wangqiang@cmos.net
  > Created Time: 2016年11月28日 星期一 15时14分03秒
 **************************/

#include<iostream>
using namespace std;

class Prototype
{
public: 
	Prototype(){}
	virtual ~Prototype() {}

	virtual Prototype* Clone()=0;
};

class ConcretePrototype1: public Prototype
{
public:
	ConcretePrototype1()
	{
		cout<<"ConcretePrototype1"<<endl;
	}
	ConcretePrototype1(const ConcretePrototype1& p)
	{
		cout<<"ConcretePrototype1 copy..."<<endl;
	}

	virtual Prototype* Clone()
	{
		return new ConcretePrototype1(*this);
	}
};

class ConcretePrototype2: public Prototype
{
public:
	ConcretePrototype2()
	{
		cout<<"ConcretePrototype2"<<endl;
	}
	ConcretePrototype2(const ConcretePrototype2& p)
	{
		cout<<"ConcretePrototype2 copy..."<<endl;
	}
	
	virtual ~ConcretePrototype2(){}

	virtual Prototype* Clone()
	{
		return new ConcretePrototype2(*this);
	}
};

int main()
{
	Prototype* p1 = new ConcretePrototype1();

	Prototype* p2 = p1->Clone();

	Prototype* p3 = new ConcretePrototype2();

	Prototype* p4  = p3->Clone();

	delete p1;
	delete p2;
	delete p3;
	delete p4;
	return 0;
}
