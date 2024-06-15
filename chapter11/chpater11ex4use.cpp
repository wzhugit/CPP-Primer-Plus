//C++ Primer Plus chapter11ex4use.cpp
//chapter11ex4use.cpp -- using the fourth draft of the Time class
//compile chapter11ex4.h and  chapter11ex4.cpp together
#include <iostream>
#include "chapter11ex4.h"

int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << ":" << tosca << endl;
	temp = aida + tosca;         //operator+()
	cout << "Aida + Tosca:" << temp << endl;

	temp = aida * 1.17;          //member opertor*()
	cout << "Aida * 1.17:" << temp << endl;

	cout << "10.0 * Tosca:" << 10.0 * tosca << endl;

	return 0;
}