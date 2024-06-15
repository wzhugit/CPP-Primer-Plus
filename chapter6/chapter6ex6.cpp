//chapter 6 ex6
#include <iostream>
#include <string>
int main()
{
	int numdonators;
	using namespace std;
	int numlarger = 0;
	int numless = 0;
	struct donation
	{
		string name;
		double donanumber;
	};
	
	cout << "Please enter the number of the donators" << endl;
	cin >> numdonators;
	donation * newdonation;
	newdonation = new donation[10];
	cin.get();

	for (int k = 0; k <= numdonators - 1; k++)
	{
		cout << "Plaese enter the name of the " << k + 1 << "nd donator" << endl;
		cin >> (newdonation+k)->name;
		cout << "Please enter the number of the donation of the " << k + 1 << "nd donator" << endl;
		cin >> (newdonation + k)->donanumber;
	}
	cout << "The list of the Grand Patrons" << endl;
	cout << "=================================" << endl;
	for (int k = 0; k <= numdonators - 1; k++)
	{
		if ((newdonation + k)->donanumber > 1000)
		{
			cout << (newdonation + k)->name << endl;

			numlarger++;
		}
		else
		{
			continue;
		}
			
	}
	if (numlarger == 0)
	{
		cout << "none";
	}
	cout << "The list of the Patrons" << endl;
	cout << "=======================" << endl;
	for (int k = 0; k <= numdonators - 1; k++)
	{
		if ((newdonation + k)->donanumber < 1000)
		{
			cout << (newdonation + k)->name << endl;
			numless++;

		}
		else
			continue;
	}
	if (numless == 0)
	{
		cout << "none"<<endl;
	}
	return 0;
}