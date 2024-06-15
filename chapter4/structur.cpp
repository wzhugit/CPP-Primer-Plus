//structur.cpp -- a simple structure
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		28.99
	};

	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout<<"Expand your guest list with "<<guest.name;
	cout<<" and "<<pal.name<<"!\n";
	//pal.name is the member of the pal variable
	cout<<"You can have both for $";
	cout<<guest.price + pal.price<<"!\n";
	cin.get();
	return 0;
}