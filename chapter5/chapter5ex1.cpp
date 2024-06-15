#include<iostream>
int main()
{
	using namespace std;
	int min;
	int max;
	int sum{0};
	cout << "请输入较小的整数：" << endl;
	cin >> min;
	cin.get();
	cout << "请输入较大的整数：" << endl;
	cin >> max;
	for (int i = min; i <= max; i++)
	{
		sum += i;
	}
	cout << "The Sum is " << sum << endl;
	return 0;
}