//C++ Prier Plus chapter10ex7use.cpp
#include "chapter10ex7.h"
#include <iostream>

int main()
{
	//调用默认构造函数
	Plorg p1;
	//调用成员函数
	p1.reportplorg();
	p1.newplorg(100);
	p1.reportplorg();

	//调用构造函数
	Plorg p2 = Plorg("myplorg", 200);
	p2.reportplorg();

	//调用成员函数
	p2.newplorg(20);
	p2.reportplorg();

	return 0;

}