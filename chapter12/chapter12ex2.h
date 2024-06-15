//C++ Primer Plus chapter12ex2.h
//string2.h -- fixed and augmented string class definition

#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;         //pointer to string
	int len;            //length of string
	static int num_strings;   //number of objects
	static const int CINLIM = 80;    //cin input limit

public:
	//constructors and other methods
	String(const char* s);        //constructor
	String(char* s);
	String();                     //default constructor
	String(const String&);        //copy constructor
	~String();                    //destructor
	int length() const { return len; }
	void Stringlow() const;      //convert all alphabets to its lower version
	void Stringhigh() const;     //convert all alphabets to its CAPITAL version
	int has(char c);     //calculate the number that character c appears in the string

	//overloaded operator methods
	//These Operators overloading must be member functions: =,[],(),->
	String& operator=(const String&);
	String& operator=(const char*);

	//concatenate strings with + operator使用+连接字符串
	String operator+(const String&);

	char& operator[](int i);
	const char& operator[](int i) const;

	//overloaded operator friends
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& st, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	friend String operator+(const char* s1, const String s2);

	//static function
	static int HowMany();

};

#endif // !STRING1_H_

