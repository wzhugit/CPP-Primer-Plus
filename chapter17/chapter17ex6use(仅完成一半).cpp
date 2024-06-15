//C++ Primer Plus chapter17ex6.cpp
#include "chapter17ex6.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main()
{
	using namespace std;

	string firstname;
	string lastname;
	char charworkingposition;
	string job;
	double income;
	int inchargeof;
	string whomreportto;

	string targetstring;   //the total string for the file to read in istringsstream object
	stringstream target;     //the string stream object saving the targetstring

	ofstream filetowrite;
	filetowrite.open("E:\\C++编程练习\\chapter17ex6file.txt", ofstream::out | ofstream::app);

	ifstream filetoread;

	cout << "Please enter the name of the person in format : firstname lastname:" << endl;
	cin >> firstname >> lastname;

	cin.get();

	cout << "Please enter the position of the employee (m for manager, e for employee, f for fink, h for highfink):" << endl;
	cin >> charworkingposition;

	cin.get();

	cout << "Please enter the job of the employee: " << endl;
	getline(cin, job);

	switch (charworkingposition)
	{
	case 'm':

		cout << "Please enter the number of staffs that the manager in charge of:" << endl;

		cin >> inchargeof;

		//manager Manager(firstname, lastname, job, inchargeof);

		filetowrite << manager(firstname, lastname, job, inchargeof) << endl;

		break;

	case 'f':
		cout << "Please enter the person whom the fink should report to:" << endl;

		getline(cin, whomreportto);

		//fink Fink(firstname, lastname, job, whomreportto);

		filetowrite << fink(firstname, lastname, job, whomreportto) << endl;

		break;

	case 'h':

		cout << "Please enter the manager's income per month:" << endl;

		cin >> income;

		cin.get();

		cout << "Please enter the person whom the fink should report to:" << endl;

		//cin.get();

		getline(cin, whomreportto);


		//highfink HighFink(firstname, lastname, job, whomreportto, income);

		filetowrite << highfink(firstname, lastname, job, whomreportto, income) << endl;

		break;

	case 'e':
		//employee emp(firstname, lastname, job);
		filetowrite << employee(firstname, lastname, job) << endl;

		break;
	}




	filetowrite.close();

	filetoread.open("E:\\C++编程练习\\chapter17ex6file.txt");

	string tempstring;

	while (getline(filetoread, tempstring))
		targetstring += (tempstring + '\n');

	target.str(targetstring);


	while (getline(target, tempstring))
		cout << tempstring << endl;

	filetoread.close();

	return 0;

}