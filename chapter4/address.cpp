#include <iostream>
#include <iomanip>
int main()
{
	using namespace std;
	int donuts = 6;
	double cups =4.5;

	cout<<"donuts value = "<<donuts;
	
	cout<<hex;
	cout<<" and donuts address = "<<&donuts
		<<endl;
	
	cout<<dec;
	cout<<"cups value = "<<cups;

	cout<<hex;
	cout<<" and cups address = "<<&cups<<endl;
	
	cin.get();
	return 0;
}