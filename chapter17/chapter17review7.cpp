//C++ Primer Plus chapter17review7.cpp
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	using namespace std;

	string name;

	double hourlywages;

	double workinghours;

	cout << "Enter your name: ";

	getline(cin, name);

	cout << "Enter your hourly wages : ";

	cin >> hourlywages;

	cout << "Enter numbers of hours worked: ";

	cin >> workinghours;

	cout << left << "First format:" << endl;

	cout << right << setw(20) << setfill(' ') << name << ": $"
		<< fixed << setw(10) << setprecision(2) << hourlywages << ":"
		<< setw(5) << setprecision(1) << workinghours << endl;

	cout << left << "Second format:" << endl;

	cout << left << name << right << setw(12) << ": $"
		<< fixed << setprecision(2) << hourlywages << setw(8) << ":" << setprecision(1)
		<< workinghours << endl;


	return 0;
}