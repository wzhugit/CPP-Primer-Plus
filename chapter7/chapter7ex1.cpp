//C++ Primer Plus chapter7ex1.cpp
#include <iostream>
int main()
{
	double harmonicmean(double num1, double num2);
	using namespace std;
	cout << "Please enter 2 numbers in order to calculate the harmonic mean:";
	int num1;
	int num2;

	while (cin >> num1 >> num2)
	{
		if ((num1 != 0) && (num2 != 0))
		{
			cout << "The harmonic average is " << harmonicmean(num1, num2) << endl;
			cout << "Continue to accept values" << endl;
			
		}
		else
			break;
	}

	return 0;
}

double harmonicmean(double num1, double num2)
{
	return 2.0 * num1 * num2 / (num1 + num2);
}