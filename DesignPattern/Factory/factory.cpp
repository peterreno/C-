/***********************************
    > File Name: factory.cpp
  > Author: wangqiang
  > Mail: wangqiang@cmos.net
  > Created Time: 2016年11月28日 星期一 10时40分43秒
 **************************/

#include<iostream>

using namespace std;
class Product {
public:
	Product()
	{
		cout<<"construction of Product"<<endl;
	}
	~Product()
	{
		cout<<"destruction of Product"<<endl;
	}
};
class ConcreteProduct : public Product{
public:
	ConcreteProduct()
	{
		cout<<"construction of ConcreteProduct"<<endl;
	}
	virtual ~ConcreteProduct()
	{
		cout<<"destruction of ConcreteProduct"<<endl;
	}
};
class Creator {
public:
	Creator()
	{
		p == NULL;
		cout<<"construction of Creator"<<endl;
	}
	virtual ~Creator()
	{
		cout<<"destructionof of Creator"<<endl;
		delete p;
	}
	void AnOperation()
	{
		Product* p = FactoryMethod();
		cout<<"an operation of product"<<endl;
		this->p = p;
	}
protected:
	virtual Product* FactoryMethod()=0;
private:
	Product *p;
};
class ConcreteCreator: public Creator{
public:
	   ConcreteCreator()
	   {
			cout<<"construction of ConcreteCreator"<<endl;
		}
	   virtual ~ConcreteCreator()
	   {

			cout<<"destruction of ConcreteCreator"<<endl;
	   }
protected:
	   virtual Product* FactoryMethod()
	   {
			return new ConcreteProduct();
	   }
};
int main()
{
	Creator *p = new  ConcreteCreator();
	p->AnOperation(); 
	delete p;
	return 0;
}
