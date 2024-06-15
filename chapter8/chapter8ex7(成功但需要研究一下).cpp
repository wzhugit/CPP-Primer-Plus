//C++ Primer Plus �����ϰ
//chapter8ex7.cpp

//C++ Primer Plus example 8.14
//�ڶ������������ģ����ѡ����Ҫ����ת����ģ��searching the function template that needs the least data transformation
//temptempover.cpp
#include <iostream>

template <typename T>      //template A
void SumArray(T* arr, int n);

struct debts
{
	char name[50];
	double amount;
};



/*
template <>
void SumArray(debts* arr, int n);          //template B
*/


template <typename T>      //template A
void SumArray(T* arr, int n)
{

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + *(arr + i);
	}
	std::cout << "The total sum of the amount is " << sum << std::endl;

	//return * arr;

}


template <>
void SumArray(const debts* arr, int n)        //template B
{
	using namespace std;
	cout << "template B\n";
	double sum = 0.0;
	for (int i = 0; i < n; i++)
		sum += (arr[i].amount);


	cout << "The total sum of the amount is " << sum << endl;
	//return arr[0];
}




int main()
{
	using namespace std;
	int things[6] = { 13,31,103,301,310,130 };
	const debts mr_E[3] =
	{
		{ "Ima Wolfe",2400.0 },
		{ "Ura Foxe",1300.0 },
		{ "Iby Stout",1800.0 }
	};

	const double* pd[3];//ָ������

				   //set pointers to the amount members of the structures in mr_E

	for (int i = 0; i < 3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}

	cout << "The Sum of things:\n";

	//things is an array of int
	//uses template A

	SumArray<int>(things, 6);


	cout << "The Sum of amounts:\n";

	//pd is an array of pointers to double
	//uses template B (more specialized)
	SumArray<>(mr_E, 3);
	//SumArray(mr_E, 3);


	return 0;
}




