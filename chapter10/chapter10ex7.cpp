//C++ Prier Plus chapter10ex7.cpp
//Plorg类的成员函数定义
#include "chapter10ex7.h"
#include <iostream>

Plorg::Plorg(string newname, int newc1)                   //新的plorg将有名称，默认名称为“Plorga"，默认C1值为50
{
	name = newname;
	C1 = newc1;
}

void Plorg::newplorg(int newc1)                        //plorg的C1值可以修改
{
	C1 = newc1;
}

void Plorg::reportplorg() const                            //plorg可报告其名称和C1
{
	using namespace std;
	cout << "The name is " << name << endl;
	cout << "The C1 value is " << C1 << endl;

}