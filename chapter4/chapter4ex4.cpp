#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string comma = ",";
	string  fname;
	string  lname;
	cout << "Enter your first name:";
	cin >> fname;
	cout << "\nEnter your last name:";
	cin >> lname;
	cout << "Here's the information in a string:"
		<< lname + comma + fname;
	cin.get();
	return 0;
}