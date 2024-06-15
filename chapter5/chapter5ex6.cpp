#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string  month[12]{ "January","February","Mars","April","May","June","July","August","September","October","November","December" };
	int quatity[3][12];
	int sum{ 0 };
	for (int j = 0; j <= 2; j++)
	{
		for (int i = 0; i <= 11; ++i)
		{

			cout << "Enter the sale quatity in " <<j+1<<" year "<< month[i] << ":";
			cin >> quatity[j][i];

		}
	}
	for (int i = 0; i <= 11; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			sum = sum + quatity[i][j];
		}
	}
	cout << "The total quatity is " << sum << endl;
	cin.get();
	return 0;
}