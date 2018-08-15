#include <iostream>
#include "mytime1.h"

int main()
{
/*	using std::cout;
	using std::endl;
	Time planning;

	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout<< "planning time = ";
	planning.Show();
	cout<< endl;

	cout<< "coding time = ";
	coding.Show();
	cout<< endl;

	cout<< "fixing time = ";
	fixing.Show();
	cout<< endl;

	total = coding + fixing;

	cout<< "coding + fixing = ";
	total.Show();
	cout<<endl;

	Time morefixing(3, 38);
	cout<< "more fixing time =";
	morefixing.Show();
	cout<<endl;
	total = morefixing.operator+(total);

	cout<<"morefixing.operator+(total) = ";
	total.Show();
	cout<<endl;

	return 0;
	*/

	/*
	using std::cout;
	using std::endl;
	Time weeding(4,35);
	Time waxing(2,47);

	Time total;
	Time diff;
	Time adjusted;

	cout<<"weeding time = ";
	weeding.Show();
	cout<<endl;

	cout<<"waxing time = ";
	waxing.Show();
	cout<<endl;

	cout<<"total work time = ";
	total = weeding + waxing;	
	total.Show();
	cout<<endl;

	diff = waxing - weeding;
	cout<< "weeding time - waxing time = ";
	diff.Show();
	cout<<endl;

	adjusted = total * 1.5;
	cout<< "adjusted work time = ";
	adjusted.Show();
	cout<< endl;

	return 0;

	*/
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout<< "Aida and Tosca:\n";
	cout<<aida<< " ;"<<tosca<< endl;

	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;

	temp = aida * 1.17;
	cout<< "Aida * 1.17: " << temp <<endl;

	cout<<" 10.0 * Tosca: " << 10.0* tosca <<endl;

	return 0;

}