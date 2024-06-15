//C++ Prier Plus chapter10ex7.h
//Plorg类声明(数据成员和成员函数原型)
#ifndef PLORG
#define PLORG
#include <string>
using std::string;

class Plorg
{
private:
	string name;    //plorg的名称不超过19个字符
	int C1;           //满意指数C1，是一个整数

public:
	Plorg(string newname = "Plorga", int newc1 = 50);          //新的plorg将有名称，默认名称为“Plorga"，默认C1值为50
	void newplorg(int newc1);                        //plorg的C1值可以修改
	void reportplorg() const;                            //plorg可报告其名称和C1
};
#endif