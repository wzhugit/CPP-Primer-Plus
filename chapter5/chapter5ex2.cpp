#include <iostream>
#include <array>
const int ArSize = 16;
using namespace std;
int main()
{
	array <long double, 16> factorials;
	factorials[1] = factorials[0] = 1LL;
	for (int i = 1; i < ArSize; i++)
		factorials[i] = i*factorials[i - 1];
	for (int i = 1; i < ArSize; i++)
		cout << i << "!= " << factorials[i] << std::endl;
	cin.get();
	return 0;
}