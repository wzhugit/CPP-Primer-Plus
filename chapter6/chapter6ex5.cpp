#include <iostream>
#include <cctype>
int main(void)
{
	using namespace std;
	int tvarps;
	double tax;
	
	while (1)
	{
		cout << "���������룺";

		cin >> tvarps;

		if (!cin >> tvarps)
			break;

		

		if (tvarps <= 5000 && tvarps >= 0)
		{
			cout << "����˰" << endl;
			//continue;
		}
		else if (tvarps >= 5001 && tvarps <= 15000)
		{
			tax = (tvarps - 5000) * 0.1;
			cout << "����˰Ϊ" << tax << endl;
		}
		else if (tvarps >= 15001 && tvarps <= 35000)
		{
			tax = 10000 * 0.1 + (tvarps - 15000) * 0.15;
			cout << "����˰Ϊ" << tax << endl;
		}
		else if (tvarps > 35000)
		{
			tax = 10000 * 0.1 + (35000 - 15000) * 0.15 + (tvarps - 35000) * 0.20;
			cout << "����˰Ϊ" << tax << endl;
		}
		else
		{
			break;
		}
	}

	return 0;
}