//C++ Primer Plus chapter12ex2.cpp
//chapter12ex2.cpp -- String class methods

#include <cstring>                //string.h for some
#include <cctype>                //for tolower()
#include "chapter12ex2.h"              //include <iostream> 

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

String::String(char* s)   //construct String from C string
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
	str = new char[len];
	str[0] = '\0';         //default string
	num_strings++;
}

String::String(const String& st)      //copy constructor
{
	num_strings++;    //handle static member update
	len = st.len;     //same length
	str = new char[len + 1];    //allot space
#pragma warning(suppress : 4996)
	std::strcpy(str, st.str);  //copy string to new location，不能使用str = st.str，因为str是一个指针，是一个地址，这样只复制了地址而没有复制内容
}

String::~String()       //necessary destructor
{

	//if (num_strings != 0)
	//{
	if (str[0] != '\0')
	{


		//std::cout << num_strings << " th string:\"" << str << "\"is deleted" << std::endl;

		delete[] str;    //required

		len = 0;
		str[0] = '\0';

		--num_strings;    //required
	}
	/*
	else
	{
		std::cout << num_strings << " th string is deleted" << std::endl;
		--num_strings;    //required
	}
	*/
	//}

}

void String::Stringlow() const          // convert all alphabets to its lower version
{

	for (int i = 0; i < len; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
	}
}

void String::Stringhigh() const     //convert all alphabets to its CAPITAL version
{

	for (int i = 0; i < len; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
	}
}

int String::has(char c)     //calculate the number that character c appears in the string
{
	int number = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == c)
			number++;
		else
			continue;
	}

	return number;
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

//concatenate strings with + operator使用+连接字符串，返回新创建的连接后的字符串
String String::operator+(const String& st)
{
	//num_strings++;
	//char * tempstr = new char[len + st.len];    //分配空间以存储临时字符串

	char* newstr = new char[len + st.len];


#pragma warning(suppress : 4996)
	std::strcpy(newstr, str);

#pragma warning(suppress : 4996)
	std::strcpy(newstr + len, st.str);
	//delete[] str;

	//num_strings++;

#pragma warning(suppress : 4996)
	//std::strcpy(str, newstr);


//#pragma warning(suppress : 4996)
	//std::strcat(str, st.str);
	return String(newstr);
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

//concatenate strings with + operator使用+连接字符串，返回新创建的连接后的字符串，友元版本
String operator+(const char* s1, const String s2)
{
	const int totallength = strlen(s1) + s2.length();

	char* res = new char[totallength + 1];

#pragma warning(suppress : 4996)
	strcpy(res, s1);
#pragma warning(suppress : 4996)
	strcpy(res + strlen(s1), s2.str);

	return String(res);
}
