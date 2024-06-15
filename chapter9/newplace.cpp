//C++ Primer Plus example 9.10
//newplace.cpp -- using placement new
#include <iostream>
#include <new>     //for placement new
const int BUF = 512;
const int N = 5;
char buffer[BUF];      //chunk of memory

int main()
{
	using namespace std;
	double *pd1, *pd2;
	int i;
	cout << "Calling new and placement new:\n";
	pd1 = new double[N];     //use heap堆
	pd2 = new (buffer) double[N];   //use buffer array 定位new特性，在buffer上创建pd2，定位new运算符用于设置内存管理规程，处理需要特定地址进行访问的硬件或在特定位置创建对象。定位new不能用delete删除指针，只能使用析构函数来删除

	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;

	cout << "emory addresses:\n" << " heap:" << pd1
		<< " static: " << (void*)buffer << endl;

	cout << "Memory contents:\n";

	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << ";";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	cout << "\nCalling new and placement new a second time:\n";
	double *pd3, *pd4;
	pd3 = new double[N];    //find new address
	pd4 = new (buffer) double[N];      //overwrite old data重写旧数据
	
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;

	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << ";";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}

	cout << "\nCalling new and placement new a third time:\n";
	delete [] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];

	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0*i;

	cout << "Memory contents:\n";

	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	delete [] pd1;
	delete [] pd3;
	return 0;

}
