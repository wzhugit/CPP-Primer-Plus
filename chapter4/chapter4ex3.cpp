#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	int fn;
	int ln;
	char comma[2] = "," ;
	cout << "������������ַ���";
	cin >> fn;
	cout << "��������յ��ַ���";
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