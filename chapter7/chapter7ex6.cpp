//C++ Primer Plus chapter7ex6.cpp
//编写一个程序，使用如下函数：
//Fill_array()将一个duble数组的名称和长度作为参数。它提示输入double值，
//并将这些值存储到数组中。当数组被填满或用户输入了非数字时，输入将停止，并返回实际输入了多少个数字。

//Show_array()将一个duble数组的名称和长度作为参数，并显示该数组的内容
//Reverse_array()将一个double数组的名称和长度作为参数，并将存储在数组中的值的顺序反转。

//程序将使用这些函数填充数组，然后显示数组；反转数组，然后显示数组

#include <iostream>
#include <vector>
int main()
{
	using namespace std;
	
	void Fill_array(double digitarray[],int length);//将double值存入数组，当数组被填满或输入了非数字时，输入将停止
	void Show_array(double numarray[], int length);
	void Reverse_array(double arrayname[], int length);//因为数组不能被拷贝，故函数不能返回数组
	double *reversed;//用于保存反转后的数组
	double originarray[1000]{ 0 };//存放输入数组并数组初始化
	//double reversarray[1000]{ 0 };//存放输入数组并数组初始化
	double * reversedarray;
	int arraylength;//数组长度

	//使用函数
	//填充数组

	cout << "Enter the number of the double numbers you want to enter:";
	cin >> arraylength;
	
	Fill_array(originarray,arraylength);

	//显示数组
	Show_array(originarray, arraylength);

	//反转数组并显示
	
	Reverse_array(originarray, arraylength);

}

void Fill_array(double digitarray[], int length)
{
	using namespace std;
	cout << "enter the first number:" << endl;
	
	int i;

	for (i = 0; i < length; i++)
	{
		if (cin >> digitarray[i])//输入放入digitarray[i]中
		{
			cout << "enter the next number:" << endl;
		}
	}
	cout << "Total input number is " << i << endl;
}


void Show_array(double numarray[], int length)
{
	using namespace std;
	cout << "The array content is :" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << numarray[i]<<" ";

	}
	cout << endl;
}


void Reverse_array(double arrayname[], int length)
{
	using namespace std;
	double reversedarray[1000]{0};
	for (int i = 0; i < length; i++)
	{
		reversedarray[i] = arrayname[length - 1 - i];
	}

	cout << "\nReversed:"<<endl;
	Show_array(reversedarray, length);
	

}