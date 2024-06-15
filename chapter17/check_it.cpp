// C++ Primer Plus example list 17.11
//check_it.cpp -- checking for valid input
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter numbers: ";

	int sum = 0;
	int input;
	int lastinput;

	while (cin >> input)      //若输入-123z，将导致输入失败
	{
		if (!cin.fail())
		{
			sum += input;
			lastinput = input;
		}
		else
			break;
	}

	cout << "Last value entered = " << lastinput << endl;
	cout << "Sum = " << sum << endl;

	return 0;
}