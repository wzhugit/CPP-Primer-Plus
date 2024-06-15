//C++ Primer Plus example 10.2
//stock00.cpp -- implemmenting the Stock class
//version 00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)       //�����ĳ����˾��Ʊ���״ι���
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

void Stock::buy(long num, double price)                                 //buy()��sell()�������ӻ���ٳ��еĹ�Ʊ��
//buy()��sell()ȷ������������Ĺ�����Ϊ�������û���ͼ�����������еĹ�Ʊ��������sell()�������������ν���
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
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);//��<C++��׼��>p787
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