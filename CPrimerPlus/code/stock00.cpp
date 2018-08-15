#include <iostream>
#include "stock00.h"

Stock::Stock()
{
	std::cout << "Default constuctor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long n , double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;
	if(n < 0)
	{
		std::cout<< "Number of share can't be negative;"
				  << company << "share set to 0.\n";
		shares = 0;
	}
	else 
		 shares = n;

	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout<<"Bye,  "<<company << "!\n";
}


void Stock::acquire(const std::string &co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		std::cout<< "Number of share can't be negative;"
				  << company << "share set to 0.\n";
		shares = 0;
	} else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}


void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout<< "Number of shares purchased can't be negative."
		         <<"Transcaction is aborted.\n";
	}
	else 
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if(num < 0)
	{
		cout << "Number os shares sold can't be negative."
		     <<"Transcaction is aborted.\n";
	}
	else if(num > shares)
	{
		cout <<"You can't sell more than you have! "
		      <<"Transcaction is aborted.\n";
	}
	else
	{
		shares  -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
//	std::cout<<"Company: "<<company
//			 <<" Share: " <<shares << "\n"
//			 <<" Share Price"<< share_val
//			 <<" Total Worth: $"<< total_val << "\n";
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	std::cout<<"Company: "<<company
			 <<" Share: " <<shares << "\n"
			 <<" Share Price"<< share_val;

	cout.precision(2);
	cout<< " Total Worth: $"<< total_val<<"\n";

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}