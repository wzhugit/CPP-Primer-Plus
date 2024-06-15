//chapter6ex1
#include <iostream>
#include <cctype>
int main()
{
	using namespace std;
	char ch;
	cout << "please enter some character:" << endl;
	while (cin >> ch)
	{
		if (ch == '@')
		{
			cout << ch;
			cout << endl;
			break;
		}
		else
		{
			if (isupper(ch))
			{
				ch = ch + 32;
				cout << ch;
				continue;
			}
			else
			{
				if (islower(ch))
				{
					ch = ch - 32;
					cout << ch;
					continue;
				}
				else
				{
					cout << ch;
					continue;
				}
			}
		}
	}
	cin.get();
	return 0;
}