#include <iostream>
#include "stonewt1.h"

int main()
{
	using std::cout;
	Stonewt poppines(9, 2.8);
	double p_wt = poppines;
	cout<<"Convert to double => ";
	cout<<"poppines : "<< p_wt << " pounds.\n";
	cout<<"Convert to int => ";
	cout<< "poppines : "<<int(poppines) << " pounds.\n";
	return 0;
}