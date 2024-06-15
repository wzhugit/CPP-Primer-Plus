//C++ Primer Plus chapter17review6.cpp
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	int integer;

	//save current format flags
	ios::fmtflags oldFlags = cout.flags();

	cout << "Please enter an integer: " << endl;

	cin >> integer;

	cout << "The integer in\nDECIMAL        " << "OCTAL          " << "HEXADECIMAL    " << endl;

	cout << showbase;   //show the base
	//cout.width(15);
	cout << left << setw(15) << integer << flush;

	cout << nouppercase << setw(15) << oct << integer << flush;

	cout << nouppercase << setw(15) << hex << integer << flush;

	cout << endl;

	//restore saved format flags
	cout.flags(oldFlags);

	return 0;
}