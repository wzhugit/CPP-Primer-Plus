#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	int i{ 1 };
	

	while (pow(1 + 0.05, i) <= 1 + 0.1*i)
	{
		i++;
	}
	cout << i << "年后，Celo的投资价值超过Daphne的投资价值，Celo的投资价值为" << 100*pow(1 + 0.05, i) << endl;
	cout << "Daphne的投资价值为" << 100 + 100 * 0.1*i;
	cin.get();

}