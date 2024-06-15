//condit.cpp -- using the condition operator
#include <iostream>
int main()
{
	using namespace std;
	int a, b;
	cout << "Enter two integers:";
	cin >> a >> b;//µÈ¼ÛÓÚcin>>a;cin>>b
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;
	cin.get();
	return 0;
}