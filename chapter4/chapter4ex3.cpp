#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	int fn;
	int ln;
	char comma[2] = "," ;
	cout << "输入你的名的字符数";
	cin >> fn;
	cout << "输入你的姓的字符数";
	cin >> ln;
	char  * fname = new char[fn];
	char  * lname = new char[ln+1];
	lname[ln] = '\0';
	cout << "Enter your first name:";
	cin >> fname;
	cout<< "\nEnter your last name:";
	cin >> lname;
	cout<<"Here's the information in a string:"
		<<strcat(strcat(lname,comma),fname);
	cin.get();
	return 0;
}