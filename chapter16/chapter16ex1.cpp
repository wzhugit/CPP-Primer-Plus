// C++ Primer Plus chapter16ex1.cpp
#include <iostream>
#include <string>
#include <iterator>

int main()
{
	using namespace std;

	string inputstring;

	//palindrome 回文
	bool ispalindrome(string & str);

	cout << "Please enter a string: " << endl;

	getline(cin, inputstring);

	if (ispalindrome(inputstring))
		cout << "The string entered is a palindrome string." << endl;

	else
		cout << "The string entered is NOT a palindrome string." << endl;


	return 0;

}


bool ispalindrome(std::string& str)
{
	std::string reversedstr;

	for (std::string::reverse_iterator it = str.rbegin(); it != str.rend(); it++)
	{
		if (isalpha(*it))      //若字符是字母
		{
			*it = tolower(*it);

			reversedstr += *it;
		}

		else
		{

			if (isgraph(*it))    //若字符可打印
			{
				reversedstr += *it;
			}

			if (isspace(*it))    //若字符为空格
			{
				reversedstr += *it;
			}
		}

	}

	for (auto& c : str)
		c = tolower(c);

	return str == reversedstr;
}

