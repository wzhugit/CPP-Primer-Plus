//C++ Prier Plus chapter10ex7use.cpp
#include "chapter10ex7.h"
#include <iostream>

int main()
{
	//����Ĭ�Ϲ��캯��
	Plorg p1;
	//���ó�Ա����
	p1.reportplorg();
	p1.newplorg(100);
	p1.reportplorg();

	//���ù��캯��
	Plorg p2 = Plorg("myplorg", 200);
	p2.reportplorg();

	//���ó�Ա����
	p2.newplorg(20);
	p2.reportplorg();

	return 0;

}