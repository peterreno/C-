#include<iostream>
using namespace std;

class AbstractProductA
{
public:
	AbstractProductA(){}
	virtual AbstractProductA(){}
};

class ConcreateProductA1: public AbstractProductA
{
public:
	ConcreateProductA1()
	{
		cout<<"ConcreateProductA1"<<endl;
	}
	virtual ~ConcreateProductA1(){}
}



class AbstractProductB
{
public:

}

