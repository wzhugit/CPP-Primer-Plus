//C++ Primer Plus chapter17ex1.cpp
#include <iostream>

int main()
{
	using namespace std;

	char ch;

	int numberofchar = 0;

	while (cin.get(ch))
	{
		if (ch != '$')
		{
			numberofchar++;
		}

		if (ch == '\n')
			continue;

		if (ch == '$')
			break;
	}

	cout << "The number of characters before the first '$' in the input stream is "
		<< numberofchar << endl;

	return 0;
}