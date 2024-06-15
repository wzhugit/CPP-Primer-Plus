//C++ Primer Plus example list 12.1
//stmgbad.h -- flawed string class definition
#include <iostream>

#ifndef STRNGBAD_H_
#define STRNGBAD_H_

class StringBad
{
private:
	char* str;       //pointer to string
	int len;         //length of string
	static int num_strings;      //number of objects ,类的静态成员为该类所有对象所共享，
	//由于头文件需要被include，若在头文件中初始化静态成员，则相当于在每个使用
	//该头文件的.cpp文件中定义，造成重定义问题，故一般静态成员在实现文件cpp中被初始化                                       
	//(The static  member of a class is shared by all the objects of the class)

public:
	StringBad(const char* s);         //constructor
	StringBad();                      //defaullt constructor
	~StringBad();                     //destructor

	//friend function
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};
#endif