//C++ Primer Plus chapter12ex2use.cpp
//compile with chapter12ex2.cpp
#include <iostream>
#include "chapter12ex2.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
	/*
	{
		using namespace std;
		String string1;
		cout << "Hi, please enter String1:\n>>";
		cin >> string1;

		String string2;
		cout << "please enter String2:\n>>";
		cin >> string2;

		cout << "The string1 is " << string1 << endl;
		cout << "The string2 is " << string2 << endl;

		cout << "The string1 + string2 is " << string1 + string2 << endl;

		String string3 = String("THIS STRING IS ALL IN CAPTALIZED ALPHABETS.");
		cout << "The CAPITALIZED STRING is " << string3 << endl;

		string3.Stringlow();

		String string4 = String("this string is all in lower alphabets.");
		cout << "The LOWER STRING is " << string4 << endl;

		string4.Stringhigh();

		String string5 = String("HA ah hA ba AA 33");
		cout << "The string 5 is " << string5 << endl;
		cout << "The letter A appeared " << string5.has('A') << " times in string 5." << endl;

	}


	return 0;
	*/

	using namespace std;

	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;

	cout << s2;      //overloaded << operator
	cin >> s3;       //overloaded >> operator
	s2 = "My name is " + s3;         //overloaded =, + operators

	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.Stringhigh();       //converts string to uppercase
	cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
		<< " 'A' characters in it.\n";

	s1 = "red";            //String(const char *),
	//then String & operator=(const String &)

	String rgb[3] = { String(s1),String("green"),String("blue") };
	cout << "Enter the name of primary color for mixing light: ";
	String ans;
	bool success = false;

	while (cin >> ans)
	{
		ans.Stringlow();        //converts string to lowercase

		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])       //overloaded == operator
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}

		if (success)
			break;
		else
			cout << "Try again!\n";
	}

	cout << "Bye\n";
	return 0;
}
