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
	cout << i << "���Celo��Ͷ�ʼ�ֵ����Daphne��Ͷ�ʼ�ֵ��Celo��Ͷ�ʼ�ֵΪ" << 100*pow(1 + 0.05, i) << endl;
	cout << "Daphne��Ͷ�ʼ�ֵΪ" << 100 + 100 * 0.1*i;
	cin.get();

}