//C++ Primer Plus example list 14.17
//arraytp.h -- Array Template
#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP
{
private:
	T ar[n];

public:
	ArrayTP()
	{

	}

	explicit ArrayTP(const T& v);
	virtual T& operator[](int i);
	virtual T operator[](int i) const;
};

/*
n in <> is used to refine the type, <>中的n用于限制类型，
这是 非类型模板参数(在模板中通过一个特定类型名而非关键字
typename/class指定非类型参数)
*/

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T& v)
{
	for (int i = 0; i < n; i++)
		ar[i] = v;
}

template <class T, int n>
T& ArrayTP<T, n>::operator[](int i)
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits: " << i
			<< " is out of range\n";

		std::exit(EXIT_FAILURE);
	}

	return ar[i];
}

template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits: " << i
			<< " is out of range\n";

		std::exit(EXIT_FAILURE);
	}

	return ar[i];
}

#endif