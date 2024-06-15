//C++ Primer Plus 例7.9 strgfun.cpp
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum";   //string in an array

	char * wail = "ululate;";   //wail point to a string

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;

	return 0;

}

//this function counts the number of ch characters
//in the string str

unsigned int c_in_str(const char * str, char ch)//const char是为了防止地址函数错误地修改字符串的内容，与python不同，其字符串没有不可变概念
{
	unsigned int count = 0;

	while (*str)      //quit when *str is '\0'
	{
		if (*str == ch)
			count++;

		str++;        //move pointer to next char

	}

	return count;

}
