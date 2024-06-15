//C++ Primer Plus example list 9.5
//external.cpp
//compile with support.cpp
#include <iostream>
using namespace std;

//external variable
double warming = 0.3;      //warming defined

// function prototypes
void update(double dt);
void local();

int main()                 //uses globla variable
{
	cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);           //call function to change warming
	cout << "Globla warming is " << warming << " degrees.\n";
	local();              //call function with local warming
	cout << "Globla warming is " << warming << " degrees.\n";
	return 0;
}

