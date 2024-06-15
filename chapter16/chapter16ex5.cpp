// C++ Primer Plus chapter16ex5.cpp
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
int reduce(T ar[], int n);

int main()
{
	long numlist[] = { 10,20,5,500,600,20,400,3000,600,500 };

	std::string strlist[] = { "I have an apple.","This is a pear",
		"I love you.","string" ,"This is a pear" };

	for (long element : numlist)
		std::cout << element << " ";

	std::cout << std::endl;

	std::cout << "The number of elements in \
the reduced array is "
<< reduce(numlist, sizeof(numlist) / sizeof(numlist[0])) << std::endl;


	for (std::string element : strlist)
		std::cout << element << ';';

	std::cout << std::endl;

	std::cout << "The number of elements in \
the reduced array is "
<< reduce(strlist, sizeof(strlist) / sizeof(strlist[0])) << std::endl;


	return 0;


}

template <class T>
int reduce(T ar[], int n)
{
	std::vector<T> arvec;

	for (int i = 0; i < n; i++)
	{
		arvec.push_back(ar[i]);
	}


	std::sort(arvec.begin(), arvec.end());

	auto end_unique = std::unique(arvec.begin(), arvec.end());

	arvec.erase(end_unique, arvec.end());

	return arvec.size();
}
