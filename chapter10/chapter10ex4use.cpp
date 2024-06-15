#include "chapter10ex4.h"
int main()
{
	using namespace SALES;

	Sales salesobj1;     //调用默认构造函数，实现setSales(Sales &)方法的交互版本
	salesobj1.showSales();   //显示数据
	

	double doublearr[4] = {1.2,3.2,4.5,10.9};  //最多4个数

	Sales salesobj2 = Sales(doublearr, 4);    //调用构造函数1
	salesobj2.showSales();   //显示数据

	return 0;
}