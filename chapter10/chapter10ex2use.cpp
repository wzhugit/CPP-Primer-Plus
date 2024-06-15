//C++ Primer Plus chapter10ex2use.cpp
#include "chapter10ex2.h"
int main()
{
	Person one;           //use default constructor
	Person two("Smythecraft");   //use #2 with one default argument
	Person three("Dimwiddy", "Sam");   //use #2, no defaults

	one.show();
	cout << endl;

	one.FormalShow();
	cout << endl;

	two.show();
	cout << endl;

	two.FormalShow();
	cout << endl;

	three.show();
	cout << endl;

	three.FormalShow();
	cout << endl;

	return 0;

}