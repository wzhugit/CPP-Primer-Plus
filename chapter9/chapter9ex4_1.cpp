//C++ Primmer Plus chapter9ex4.h 对名称空间进行扩展，以提供三个函数的定义
#include "chapter9ex4.h"
#include <iostream>

//non-interactive version
//copies the lesser of 4 or n items from the array ar
//to the sales member of s and computes and stores the
//average, maximum, and minimum values of the entered items;
//remaining elements of sales, if any, set to 0.
void SALES::setSales(Sales & s, const double ar[], int n = 4)
{
	for (int i = 0; i < n;i++)
		s.sales[i] = ar[i];

	double sum = 0.0;
	for (int i = 0; i < n; i++)
		sum += s.sales[i];

	s.average = sum / n;

	double max = s.sales[0];
	for (int i = 0; i < n; i++)
	{
		if (s.sales[i] >= max)
		{
			max = s.sales[i];
		}
	}
	s.max = max;

	double min = s.sales[0];
	for (int i = 0; i < n; i++)
	{
		if (s.sales[i] <= min)
		{
			min = s.sales[i];
		}
	}
	s.min = min;
}


//interactive version
//gather sales for 4 quarters interactively, stores them
//in the sales member of s and computes and stores the 
//average, maximum, and minimum values
void SALES::setSales(SALES::Sales & s)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Enter the " << i+1 << "th sale in double:" << std::endl;
		std::cin >> s.sales[i];
	}

	double sum = 0.0;
	for (int i = 0; i < 4; i++)
		sum += s.sales[i];

	s.average = sum / 4;

	double max = s.sales[0];
	for (int i = 0; i < 4; i++)
	{
		if (s.sales[i] >= max)
		{
			max = s.sales[i];
		}
	}
	s.max = max;

	double min = s.sales[0];
	for (int i = 0; i < 4; i++)
	{
		if (s.sales[i] <= min)
		{
			min = s.sales[i];
		}
	}
	s.min = min;
}


//display all information in structure s
void SALES::showSales(const Sales & s)
{
	std::cout << "the sales part of the structure is " << s.sales << std::endl;
	std::cout << "the average part of the structure is " << s.average << std::endl;
	std::cout << "the maxium part of the structure is " << s.max << std::endl;
	std::cout << "the minimum part of the structure is " << s.min << std::endl;
}