#include <iostream>
#include <string>
struct car
{
	std::string producer;
	int year;
};
int main()
{
	using namespace std;

	
	cout << "How many cars do you wish to catalog?:" << endl;
	int n;
	cin>>n;
	cin.get();
	
	struct car * che = new car[n];
	

	for (int i = 0; i < n; ++i)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the make:";
		getline(cin,che[i].producer);
		cout << endl;
		
		cout << "Please enter the year:";
		cin>>che[i].year;
		cin.get();



	}
	cout << "Here is your collection:" << endl;
	for (int k = 0; k <= n; k++)
	{
		
		cout << che[k].producer;
		cout << che[k].year;
		cout << endl;
		
	}
	delete [] che;

	cin.get();
	return 0;

}

