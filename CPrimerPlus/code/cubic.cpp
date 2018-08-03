#include<iostream>


void swapr(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int main()
{
	long a = 3, b = 5;
	swapr(a, b);
	std::cout<<"a:"<<a<<std::endl;
	std::cout<<"b:"<<b<<std::endl;
	return 0;
}