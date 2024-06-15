//C++ Primer Plus chapter18ex3.cpp
#include <initializer_list>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

long double sum_value()
{
	return 0;
}

template<typename T>
long double sum_value(const T& t)
{
	return t;
}

template <typename T,typename... Args>
long double sum_value(const T &t, const Args&... args)
{
	return t + sum_value(args...);    //ตÝน้
}

int main()
{
	using namespace std;

	int n = 14;

	double x = 2.71828;

	char ch = 'y';

	cout << sum_value(n, x) << endl;

	cout << sum_value(x * x, ch, 'z', 8);

	return 0;
}