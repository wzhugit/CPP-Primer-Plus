//C++ Primer Plus example list 12.5
//string1.cpp -- String class methods

#include <cstring>                //string.h for some
#include "string1.h"              //include <iostream> 

using std::cin;
using std::cout;

//initializing static class member

int String::num_strings = 0;

//static method
int String::HowMany()
{
	return num_strings;
}

//class method
String::String(const char* s)   //construct String from C string
{
	len = std::strlen(s);      //set size
	str = new char[len + 1];   //allot storage
#pragma warning(suppress : 4996)
	std::strcpy(str, s);        //initialize pointer
	num_strings++;             //set object count
}

String::String()                //default constructor
{
	len = 4;
	str = new char[1];
	str[0] = '\0';         //default string
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;    //handle static member update
	len = st.len;     //same length
	str = new char[len + 1];    //allot space
#pragma warning(suppress : 4996)
	std::strcpy(str, st.str);  //copy string to new location，不能使用str = st.str，因为str是一个指针，是一个地址，这样只复制了地址而没有复制内容
}

String::~String()       //necessary destructor
{
	--num_strings;    //required
	delete[] str;    //required
}

//overloaded operator methods

//assign a String to a String
String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;

	delete[] str;
	len = st.len;
	str = new char[len + 1];
#pragma warning(suppress : 4996)
	std::strcpy(str, st.str);
	return *this;
}

//assign a C string to a String
String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
#pragma warning(suppress : 4996)
	std::strcpy(str, s);
	return *this;
}

//read-write char access for non-const String
char& String::operator[](int i)
{
	return str[i];
}

//read-only char access for const String
const char& String::operator[](int i) const
{
	return str[i];
}

//overloaded operator friends
bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

//simple string output
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

//quick and dirty String input
istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];   //因为是友元函数，故需要使用 类名::静态成员 来访问静态成员
	is.get(temp, String::CINLIM);

	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;

	return is;
}