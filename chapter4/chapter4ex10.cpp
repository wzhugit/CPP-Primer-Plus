#include <iostream>
#include <array>
#include <cmath>
int main()
{
	using namespace std;
	array <double, 3> mark;
	cout << "�����һ��40���ܵĳɼ���" << endl;
	cin >> mark[0];
	cout << "����ڶ���40���ܵĳɼ���" << endl;
	cin >> mark[1];
	cout << "���������40���ܵĳɼ���" << endl;
	cin >> mark[2];
	cout << "����3"
		<< "ƽ���ɼ���"
		<< (mark[0] + mark[1] + mark[2]) / 3
		<< endl;
	cin.get();
}