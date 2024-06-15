//C++ Primer Plus example list 4.20
//ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout<<animal<<" and ";
	cout<<bird<<"\n";

	cout<<"Enter a kind of animal:";
	cin>>animal;

	ps = animal;
	cout<<ps<<"!\n";
	cout<<"Before using strcpy():\n";
	cout<<animal<<" at "<<(int *)animal<<endl;
	cout<<ps<<" at "<<(int *)ps<<endl;

	ps=new char[strlen(animal)+1];
	strcpy(ps,animal);
	cout<<"After using strcpy():\n";
	cout<<animal<<" at "<<(int *)animal<<endl;
	cout<<ps<<" at "<<(int *)ps<<endl;
	delete [] ps;
	cin.get();
	return 0;
}