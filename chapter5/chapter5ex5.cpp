#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string  month[12]{"January","February","Mars","April","May","June","July","August","September","October","November","December"};
	int quatity[12];
	int sum{0};
	for (int i = 0; i <= 11; i++)
	{
		
		cout << "Enter the sale quatity in " << month[i]<<":";
		cin >> quatity[i];

	}
	for (int i = 0; i <= 11; i++)
	{
		sum = sum + quatity[i];
	}
	cout << "The total quatity is " << sum << endl;
	cin.get();
	return 0;
}