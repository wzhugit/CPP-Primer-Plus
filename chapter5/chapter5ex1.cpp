#include<iostream>
int main()
{
	using namespace std;
	int min;
	int max;
	int sum{0};
	cout << "�������С��������" << endl;
	cin >> min;
	cin.get();
	cout << "������ϴ��������" << endl;
	cin >> max;
	for (int i = min; i <= max; i++)
	{
		sum += i;
	}
	cout << "The Sum is " << sum << endl;
	return 0;
}