//not.cpp -- using the not operator
#include <iostream>
#include <climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;                 //����ʹ��int������һ��������Χ����������Ϊdouble�ķ�Χ�ϴ�

	cout << "Yo,dude!Enter an integer value:";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again:";
		cin >> num;
	}
	int val = int (num);//ǿ��ת��
	cout << "You've entered the integer " << val << "\nBye\n";
	cin.get();
	return 0;
}


bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}