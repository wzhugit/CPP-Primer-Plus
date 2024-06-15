//C++ Primer Plus example 10.1
//stock00.h -- Stock class interface
//version 00
//头文件保护符确保头文件被包含时没有重定义，其本身STOCK00_H_并不被使用，只是一个标识符
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock    //class declaration
{
private:
	std::string company;      //类的数据成员通常放在私有部分，为的是数据隐藏
	long shares;
	double share_val;
	double total_val;
	void set_tot() 
	{
		total_val = shares * share_val;
	}

public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};     //note semicolon ';' at the end

#endif

