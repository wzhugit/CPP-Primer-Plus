//C++ Primer Plus example list 16.4
//str2.cpp -- capacity() and reserve()
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string empty;
	string small = "bit";
	string larger = "Elephants are a girl's best friend";

	cout << "Sizes:\n";
	cout << "\tempty: " << empty.size() << endl;    //size() returns the number of characters
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarger: " << larger.size() << endl;
	cout << "Capacities:\n";
	cout << "\tempty: " << empty.capacity() << endl;     //capacity() returns memory size, which is currently allocated to string 
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarger: " << larger.capacity() << endl;
	empty.reserve(50);                    //reserve(n) requires the minimum length of the memory blocks, which can hold at least n elements
	cout << "Capacity after empty reserve(50): "
		<< empty.capacity() << endl;

	return 0;
}