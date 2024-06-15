//C++ Primer Plus 编程练习
//chapter8ex5.cpp
#include <iostream>

template <typename T>
T max5(T arr[]);



int main()
{
	using namespace std;

	int arrint5[5] = {2,3,4,10,5};
	double arrdouble5[5] = { 3.2,4.6,8.3,3.3,7.5 };

	cout << max5(arrint5) << endl;
	cout << max5(arrdouble5) << endl;

	return 0;
}

template <typename T>
T max5(T arr[])
{
	T max = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}


