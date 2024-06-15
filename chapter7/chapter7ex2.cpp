//C++ Primer Plus chapter7ex2
//要求用户最多输入10个高尔夫成绩，
//并将其存在一个数组中。允许用户提早结束输入，
//并在一行上显示所有成绩。使用3个数组处理函数进行输入，显示和计算平均成绩
#include <iostream>
int main()
{
	//函数声明

	void input(double grade[], int length);//进行输入的函数
	void show(double * pt,int length);//进行显示的函数
	double avg(double * grade, int length);//计算平均成绩的函数

	//函数调用
	//输入
	std::cout << "Please enter the number of the grades (maximam 10)";
	int number;
	std::cin >> number;

	double grade[10] = {0,0,0,0,0,0,0,0,0,0};
	input(grade,number);

	//显示
	show(grade, 10);

	//计算平均成绩
	std::cout << "The average grade is " << avg(grade,number)<<std::endl;
	return 0;
}

//进行输入的函数
void input(double grade[],int length)
{
	using namespace std;

	for (int i = 0; i < length; i++)
	{
		cout << "please enter the grades,q to quit:" << endl;
		if (cin >> grade[i])
		{
			continue;
		}
		else
			break;
	}

	
}

//进行显示的函数
void show(double * pt, int length)
{
	for (int n = 0; n < length; n++)
	{
		using namespace std;
		cout << *pt<<" ";
		pt++;
	}
	
}

//计算平均成绩的函数
double avg(double * grade, int length)
{
	double sum = 0.0;

	for (int i = 0; i < length; i++)
	{
		sum += grade[i];
	}

	return 1.0*sum / length;
}