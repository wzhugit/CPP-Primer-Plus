//C++ Primer Plus chapter18ex1.cpp
#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <initializer_list>
#include <vector>

template <typename T>
T average_list(std::initializer_list<T> vec);

int main()
{
	using namespace std;

	//list of double deduced from list contents
	auto q = average_list({ 15.4,10.7,9.0 });
	cout << q << endl;

	//list of int deduced from list contents
	cout << average_list({ 20,30,19,17,45,38 }) << endl;

	//forced list of double
	auto ad = average_list<double>({ 'A',70,65.33 });

	cout << ad << endl;

	return 0;

}

template <typename T>
T average_list(std::initializer_list<T> vec)
{
	std::vector<T> ii(vec);
	
	return accumulate(ii.begin(),ii.end(),0.0) / vec.size();
}