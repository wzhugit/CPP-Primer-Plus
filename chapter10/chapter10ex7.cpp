//C++ Prier Plus chapter10ex7.cpp
//Plorg��ĳ�Ա��������
#include "chapter10ex7.h"
#include <iostream>

Plorg::Plorg(string newname, int newc1)                   //�µ�plorg�������ƣ�Ĭ������Ϊ��Plorga"��Ĭ��C1ֵΪ50
{
	name = newname;
	C1 = newc1;
}

void Plorg::newplorg(int newc1)                        //plorg��C1ֵ�����޸�
{
	C1 = newc1;
}

void Plorg::reportplorg() const                            //plorg�ɱ��������ƺ�C1
{
	using namespace std;
	cout << "The name is " << name << endl;
	cout << "The C1 value is " << C1 << endl;

}