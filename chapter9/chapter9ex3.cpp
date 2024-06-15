//C++ Primer Plus chapter9ex3.cpp
#include <iostream>
#include <new>

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	using namespace std;

	chaff buffer[20];

	chaff * chaffarr;
	//使用静态数组+定位new运算符
	chaffarr = new (buffer) chaff[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Enter the dross value(char) of the " << i + 1 << "st chaff data:" << endl;
		cin.getline(chaffarr[i].dross,20);

		cout << "Enter the slag value(int) of the " << i + 1 << "st chaff data:" << endl;
		cin >> chaffarr[i].slag;
		cin.get();
	}


	for (int i = 0; i < 2; i++)
	{
		cout << "The dross value(char) of the " << i + 1 << "st chaff data is:" << chaffarr[i].dross << endl;
		

		cout << "The slag value(int) of the " << i + 1 << "st chaff data is:" << chaffarr[i].slag << endl;

	}


}