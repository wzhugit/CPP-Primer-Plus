//C++ Primer Plus ±‡≥Ã¡∑œ∞
//chapter8ex3.cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	
	void capitalize(string & str);
	string s;
	while (true)
	{
		cout << "Enter a string (q to quit)";
		getline(cin,s);
		if (s == "q")
		{
			cout << "Bye" << endl;
			break;
		}
		else
		{
			capitalize(s);
			//cout << char(toupper(s[0]));
		}
	}
}



void capitalize(string & str)
{
	for (int i = 0; i < str.size() ; i++)
		cout << char(toupper(str[i]));

	cout << endl;
}
