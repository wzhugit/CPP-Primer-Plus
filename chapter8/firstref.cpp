//C++ Primer Plus example 8.2
//firstref.cpp---defining and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;//rodents is a reference
	cout << "rats = " << rats;
	cout << ",rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ",rodents = " << rodents << endl;

	//some implementations raquire type casting the following
	//address to type unsigned

	cout << "rats address = " << &rats;
	cout << ",rodents address = " << &rodents << endl;
	return 0;
}