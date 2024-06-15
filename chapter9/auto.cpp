//C++ Primer Plus
//example 9.4 auto.cpp
#include <iostream>
void oil(int x);

int main()
{
	using namespace std;

	int texas = 31;
	int year = 2011;
	cout << "In main(),texas = " << texas << ";&texas = ";
	cout << &texas << endl;
	cout << "In main(),year = " << year << ",&year = ";
	cout << &year << endl;
	oil(texas);
	cout << "In main(),texa = " << texas << ",&texas = ";
	cout << &texas << endl;
	cout << "In main(),year = " << year << ",&year = ";
	cout << &year << endl;
	return 0;
}

void oil(int x)
{
	using namespace std;
	int texas = 5;

	cout << "In oil(),texas = " << texas << ",&texas = ";
	cout << &x << endl;
	{                        //start a block
		int texas = 133;
		cout << "In block,texas = " << texas;
		cout << ",&texas = " << &texas << endl;
		cout << "In block, x = " << x << ",&x = ";
		cout << &x << endl;
	}                        //end a block
	cout << "Post-block texas = " << texas;
	cout << ",&texas = " << &texas << endl;
}