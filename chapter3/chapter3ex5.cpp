#include <iostream>
using namespace std;
int main()
{
	long long worldpop;
	long long uspop;
	cout<<"Enter the world's population:";
	cin>>worldpop;
	cout<<"Enter the population of the US:";
	cin>>uspop;
	cout<<"The population of the US is "<<(double)uspop/(double)worldpop*100.00<<"% of the world population."<<endl;
	cin.get();
	return 0;
}