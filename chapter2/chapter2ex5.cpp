using namespace std;
#include <iostream>
int main(void)
{
	double cel;
	double fah;
	cout<<"Please enter a Celsius value:"<<endl;
	cin>>cel;
	fah=1.8*cel+32;
	cout<<cel<<" degrees Celsius is "<<fah<<" degrees Fahrenheit."<<endl;
	cin.get();
	return 0;
}