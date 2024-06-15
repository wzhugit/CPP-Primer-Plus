//C++ Primer Plus chapter10ex2.cpp
#include "chapter10ex2.h"
#include <cstring>
Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	strcpy(	fname,fn);
}

void Person::show() const            //firstname lastname format
{
	using namespace std;
	std::cout << fname << " " << lname << endl;
}

void Person::FormalShow() const      //lastname firstname format
{
	using namespace std;
	std::cout << lname << " " << fname << endl;
}