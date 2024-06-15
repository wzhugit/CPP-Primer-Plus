//C++ Prier Plus chapter10ex2.h
#include <iostream>

#ifndef PERSON_
#define PERSON_

using namespace std;

class Person
{
	private:
		static const int LIMIT = 25;
		string lname;         //Person's last name
		char fname[LIMIT];         //Person's first name

	public:
		Person()
		{
			lname = "";
			fname[0] = '\0';
		}                          //#1

		Person(const string & ln, const char * fn = "Heyyou");  //#2

		//the following methods display lname and fname
		void show() const;         //firstname lastname format
		void FormalShow() const;       //lastname firstname format
};


#endif
