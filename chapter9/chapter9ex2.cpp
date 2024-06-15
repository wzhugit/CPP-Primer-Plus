//C++ Primer Plus chapter9ex2.cpp based on example list 9.9 static.cpp

#include <iostream>
#include <string>
//constants
//const int ArSize = 10;

//function prototype
using std::string;
void strcount(const string str);

int main()
{
	using namespace std;
	
	string input;
	//char next;

	cout << "Enter a line:\n";
	
	while (getline(cin,input))
	{
		/*
		cin.get(next);
		while (next != '\n')               //string didn't fit
			cin.get(next);                 //dispose of remainder
		strcount(input);
		*/
		strcount(input);
		if (input != "")
			cout << "Enter next line (empty line to quit):\n";
		else
			break;
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const string str)
{
	using namespace std;
	static int total = 0;     //static local variable
	//int count = 0;            //automatic local variable

	cout << "\"" << str << "\" cotains " << str.length();
	
	cout << " characters\n";
}