#include "chapter10ex4.h"
int main()
{
	using namespace SALES;

	Sales salesobj1;     //����Ĭ�Ϲ��캯����ʵ��setSales(Sales &)�����Ľ����汾
	salesobj1.showSales();   //��ʾ����
	

	double doublearr[4] = {1.2,3.2,4.5,10.9};  //���4����

	Sales salesobj2 = Sales(doublearr, 4);    //���ù��캯��1
	salesobj2.showSales();   //��ʾ����

	return 0;
}