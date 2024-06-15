#include <iostream>
#include "chapter9ex4.h"
int main()
{
	SALES::Sales salesobj1;
	SALES::Sales salesobj2;

	//interactive version setSales
	SALES::setSales(salesobj1);
	SALES::showSales(salesobj1);

	//non-inteactive version setSales
	double arr[4] = { 3.3,4.2,5.1,6.5 };
	SALES::setSales(salesobj2,arr,4);
	SALES::showSales(salesobj2);
}