#include <iostream>
using namespace std;
int main()
{
	char ch;
	int ct1, ct2;

	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$')
	{
		cout << ch;
		ct1++;
		if (ch = '$')
			ct2++;
		cout << ch;
	}
	cout << "\nct1=" << ct1 << ",ct2=" <<ct2<< "\n";
	cin.get();
	return 0;
}