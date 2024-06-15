// C++ Primer Plus example list 17.3
//manip.cpp -- using format manipulators
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter an Integer: ";
	int n;
	cin >> n;


	cout << "n       n*n\n";
	cout << n << "      " << n * n << " (decimal)\n";
	//set to hex mode
	cout << hex;
	cout << n << "       ";
	cout << n * n << "  (hexadecimal)\n";

	//set to octal mode
	cout << oct << n << "     " << n * n << "  (ocatal)\n";

	//alternative way to call a manipulator
	dec(cout);
	cout << n << "     " << n * n << " (decimal)\n";

	return 0;
}