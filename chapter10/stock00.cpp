//C++ Primer Plus example 10.2
//stock00.cpp -- implemmenting the Stock class
//version 00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)       //管理对某个公司股票的首次购买
{
	company = co;
	
	if (n < 0)
	{
		std::cout << "Nummber of shares can't be negative;"
			<< company << " shares set to 0.\n";

		shares = 0;

	}

	else
		shares = n;

	share_val = pr;

	set_tot();
}

void Stock::buy(long num, double price)                                 //buy()和sell()管理增加或减少持有的股票。
//buy()和sell()确保买入或卖出的股数不为负。若用户试图卖出超过持有的股票数量，则sell()函数将结束本次交易
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
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

	if (num < 0)
	{
		cout << "Number of shares sold can't be negative."
			<< "Transaction is aborted.\n";
	}

	else if (num > shares)
	{
		cout << "You can't sell more than you have!"
			<< "Transaction is aborted.\n";
	}

	else
	{
		shares -= num;
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
	using std::cout;
	using std::ios_base;

	//set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);//见<C++标准库>p787
	std::streamsize prec = cout.precision(3);

	std::cout << "Company:" << company
		<< " Shares:" << shares << '\n';
	cout << " Share Price:$" << share_val;
	//set forat to #.##
	cout.precision(2);
	cout << " Total Worth:$" << total_val << '\n';

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}