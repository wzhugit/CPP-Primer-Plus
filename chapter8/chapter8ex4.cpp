//C++ Primer Plus 编程练习
//chapter8ex4.cpp
#include <iostream>
using namespace std;
#include <cstring>      //for strlen(),strcpy()
struct stringy
{
	char * str;     //points to a string
	int ct;         //length of string (not counting '\0')
};

//prototypes(函数原型，即函数声明) for set(),show() and show() go here


int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	void set(stringy & beany, char * testing);    //first argument is a reference,
	//allocates space to hold copy of testing
	//sets str member of beany to point to the
	//new block, copies testing to new block,
	//and sets ct member of beany
	void show(stringy & beany, int times = 1);
	void show(char * str, int times = 1);


	set(beany, testing);
	show(beany);   //prints member string once
	show(beany, 2);  //prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);   //prints testing string once
	show(testing, 2);   //prints testing string twice

	show("Done!");
	return 0;
}

void set(stringy & beany, char * testing)
{
	beany.str = new char[100];
	beany.str = testing;
	beany.ct = strlen(beany.str);
}

void show(stringy & beany, int times)
{
	for (int i = 0; i < times; i++)
		cout << beany.str << endl;
}

void show(char * str, int times)
{
	for (int i = 0; i < times; i++)
		cout << str << endl;
}