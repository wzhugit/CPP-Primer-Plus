#include "chapter10ex4.h"
#include <iostream>
SALES::Sales::Sales()             //默认构造函数
{

	using namespace std;
	cout << "Please enter the number of the array items (4 or less):" << endl;
	cin >> totalnum;

	if (totalnum >= 5)
		cout << "Error. Items should less than 5. Please check your input" << endl;

	else
	{
		for (int i = 0; i < totalnum; i++)
		{
			cout << "Please enter the " << i + 1 << "th sale in double:" << std::endl;
			cin >> sales[i];
		}

		double sum = 0.0;
		for (int i = 0; i < totalnum; i++)
			sum += sales[i];

		average = sum / totalnum;

		max = sales[0];

		for (int i = 0; i < totalnum; i++)
		{
			if (sales[i] >= max)
			{
				max = sales[i];
			}
		}


		min = sales[0];
		for (int i = 0; i < totalnum; i++)
		{
			if (sales[i] <= min)
			{
				min = sales[i];
			}
		}

	}

}

SALES::Sales::Sales(double ar[], int n)         //构造函数1
{
	totalnum = n;
	

	for (int i = 0; i < totalnum; i++)
		sales[i] = ar[i];

	double sum = 0.0;

	for (int i = 0; i < totalnum; i++)
		sum += ar[i];

	average = sum / totalnum;

	max = ar[0];

	for (int i = 0; i < totalnum; i++)
	{
		if (ar[i] > max)
			max = ar[i];
		else
			continue;
	}
	
	min = ar[0];

	for (int i = 0; i < totalnum; i++)
	{
		if (ar[i] < min)
			min = ar[i];
		else
			continue;
	}

}


//display all information in structure s
void SALES::Sales::showSales() const                  //成员函数，用于显示数据
{
	using namespace std;
	cout << "The sales array is ";

	for (int i = 0; i < totalnum; i++)              //显示sales数组的内容
	{
		cout << sales[i] << " ";
	}
	cout << endl;

	cout << "The average is " << average << endl;

	cout << "The maximum of the array is " << max << endl;

	cout << "The minimum of the array is " << min << endl;

}


/*
void SALES::Sales::setSales()                         //setSales(Sales &)的交互版本
{
	using namespace std;
	cout << "Please enter the number of the array items (4 or less):" << endl;
	cin >> totalnum;

	if (totalnum >= 5)
		cout << "Error. Items should less than 5. Please check your input" << endl;

	else
	{
		for (int i = 0; i < totalnum; i++)
		{
			cout << "Please enter the " << i+1 << "th sale in double:" << std::endl;
			cin >> sales[i];
		}

		double sum = 0.0;
		for (int i = 0; i < totalnum; i++)
			sum += sales[i];

		average = sum / totalnum;

		max = sales[0];

		for (int i = 0; i < totalnum; i++)
		{
			if (sales[i] >= max)
			{
				max = sales[i];
			}
		}
		

		min = sales[0];
		for (int i = 0; i < totalnum; i++)
		{
			if (sales[i] <= min)
			{
				min = sales[i];
			}
		}
		
	}
		
}*/