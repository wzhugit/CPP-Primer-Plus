//C++ Primer Plus 编程练习
//chapter8ex6.cpp
#include <iostream>
#include <string>

template <typename T>
T maxn(T * arr, int number)
{
	T max = arr[0];

	for (int i = 0; i < number; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
		}
	}
	return max;
}


//模板具体化
template <>
const char * maxn(const char **arr, const int number)
{
	int max = 0;

	for (int i = 0; i < number; i++)
	{
		if (strlen(arr[i]) >= strlen(arr[max]))
		{
			max = i;
		}
	}
	return arr[max];
}


int main()
{
	using namespace std;
	
	using std::string;
	//char * maxn(char * arr[], int number);

	//template <typename T>
	//T maxn(T arr[], int number);

	const char * str = "Hello Moto";
	cout << "string length is " << strlen(str) << endl;
	
	//int maxn(int arr[], int number);
	//double maxn(double arr[], int number);
	//创建一个包含6个int元素的数组
	int arrint[6] = { 200,143,243,43,-43,77 };
	//创建一个包含4个double元素的数组
	double arrdouble[4] = { 23.1,-54.2,100.3,22.0 };

	cout << "The max element of the integer array is " << maxn(arrint,6) << endl;
	cout << "The max element of the double array is " << maxn(arrdouble, 4) << endl;

	
	const char * strarray[5] = { "I am Batman","Hello Moto","Apple","Pear","Bye" };

	//cout << strarray[0] << endl;
	cout << "The max element of the string array is " << maxn(strarray, 5) << endl;
	

	return 0;
}



