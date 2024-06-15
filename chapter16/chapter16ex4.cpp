// C++ Primer Plus chapter16ex4.cpp
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	int reduce(long ar[], int n);

	long numlist[] = { 10,20,5,500,600,20,400,3000,600,500 };

	for (long element : numlist)
		std::cout << element << " ";

	std::cout << std::endl;

	std::cout << "The number of elements in \
the reduced array is "
<< reduce(numlist, sizeof(numlist) / sizeof(numlist[0])) << std::endl;


	return 0;


}

int reduce(long ar[], int n)
{
	std::vector<long> arvec;

	for (int i = 0; i < n; i++)
	{
		arvec.push_back(ar[i]);
	}


	std::sort(arvec.begin(), arvec.end());

	auto end_unique = std::unique(arvec.begin(), arvec.end());

	arvec.erase(end_unique, arvec.end());

	return arvec.size();
}
