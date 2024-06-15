//C++ Primer Plus chapter7ex5.cpp
#include <iostream>
int main()
{
	using namespace std;
	long int product(long int n);

	long int n;
	cout << "Enter a positive number:";
	while (cin >> n)
	{
		cout <<"\n"<< n << "!=" << product(n)<<endl;
		cout << "Enter a positive number:";
	}

}


long int product(long int n)
{
	if (n > 0)
	{
		return n * product(n - 1);
	}

	else if (n == 0)
		return 1;
	else
		std::cout << "n must be a positive number or 0.";
}