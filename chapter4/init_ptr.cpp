//C++ Primer Plus example list 4.16
#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int * pt = &higgens;

	cout<<"Value of higgens = "<<higgens
		<<";Adress of higgens = "<<&higgens<<endl;
	cout<<"Value of *pt = "<<*pt
		<<":Value of pt = "<<pt<<endl;
	cin.get();
	return 0;

}