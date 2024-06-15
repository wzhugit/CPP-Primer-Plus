//C++ Primer Plus chapter7ex4.cpp
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	
	cout << "You have on chance in ";
	cout << probability(47, 5) * probability(27, 1);
	cout << " of winning.\n" << endl;
}

//the following function calculates the probability of picking picks
//numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}