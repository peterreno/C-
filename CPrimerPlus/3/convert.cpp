/***********************************
    > File Name: convert.cpp
  > Author: wangqiang
  > Mail: wangqiang@cmos.net
  > Created Time: 2016年11月23日 星期三 16时40分28秒
 **************************/

#include<iostream>
using namespace std;

int main() 
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	const int code = 44;
//	int x = 66;
//	char c1{31325};
	char c2 ={66};
	char c3 = {code};
//	char c4 = {x};

//	x = 31352;
//	char c5 = x;

	auto x = 0.0;
	double y = 0;
	auto z = 0;

	cout<<"x:"<<x<<endl;
	cout<<"y:"<<y<<endl;
	cout<<"z:"<<z<<endl;

	return 0;
}
