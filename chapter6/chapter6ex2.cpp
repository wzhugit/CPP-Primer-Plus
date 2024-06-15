#include <iostream>
#include <cctype>
int main()
{
	
	using namespace std;
	array<double,10> marray;
	double num;
	double sum = 0;
	int i=0;
	cout << "Please enter at most 10 values" << endl;
	while (cin >> num)
	{
		if (isdigit(num) == 0)
		{
			break;
		}
		else
		{
			if (i >= 10)
			{
				break;
			}
			marray[i] = num;
			i++;
			sum += num;
		}
	}
	cout << "The average is " << sum / i << endl;



}

