/***********************************
    > File Name: test.cpp
  > Author: wangqiang
  > Mail: wangqiang@cmos.net
  > Created Time: 2016年11月23日 星期三 14时42分47秒
 **************************/

#include<iostream>
//#include<cuchar>
using namespace std;

int main() 
{
	wchar_t bob = L'P';
	char tom = L'T';
	wcout<< L"tall" <<endl;
	wcout<<"bob:"<<bob<<endl;
	wcout<<"tom:"<<tom<<endl;

	char16_t ch1 = u'q';
	char32_t ch2 = U'\U0000222B';
	wcout<<L"begain"<<endl;
	wcout<<"ch1:"<<ch1<<endl;
	wcout<<"ch2:"<<ch2<<endl;
	wcout<<L"end"<<endl;
	return 0;
}
