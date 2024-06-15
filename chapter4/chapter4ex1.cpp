#include <iostream>  
void main()
{
	using namespace std;
	cout << "What is your first name?";
	char fname[20];
	char lname[20];
	char grade;
	int age;
	cin.getline(fname, 20);
	//int fsize=sizeof(fname);  
	//cout<<b;  
	//cout<<fname;  
	cout << endl << "What is your last name ?";
	cin.getline(lname, 20);//使用数组来规避末尾的换行符问题
	cout << endl << "what letter grade do you deserve?";
	cin >> grade;
	cout << "\nwhat is your age?";
	cin >> age;
	cout << endl << "Name:" << lname << " ," << fname << endl;
	cout << "Grade:" << char(grade + 1);
	cout << endl << "Age:" << age;
	cin.get();
}