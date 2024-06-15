//C++ Primer Plus�����ϰch7ex10.cpp
//
/*
���һ����Ϊcalculate()�ĺ���������������doubleֵ��һ��ָ������ָ�룬
����ָ��ĺ�����������double������������һ��doubleֵ��calculate()����������Ҳ��double��
�����ر�ָ��ĺ�����ʹ��calculate()������double��������õ���ֵ�����磬����add()�����Ķ������£�
double add(double x,double y)
{
    return x+y;
}
�����������еĺ������ý�����calculate()��2.5��10.4����add()������������add()�ķ���ֵ��12.9����
double q = calculate(2.5,10.4,add);
��д���򣬵�Ӷ��������������������һ����add()���Ƶĺ������ó���ʹ��ѭ�������û��ɶԵ��������֣�
����ÿ�����֣������ʹ��calculate()������add()������һ�����������������߰�ð�գ��ɳ��Դ���һ��ָ�����飬
���е�ָ��ָ��add()��ʽ�ĺ���������дһ��ѭ����ʹ����Щָ��������calculate()������Щ������
��ʾ����������������ָ������ķ�ʽ�����а�������ָ�룺
double (*pf[3])(double,double);
�ɳ���ʹ�������ʼ���﷨��������������Ϊ��ַ����ʼ�����������顣
*/

#include <iostream>

int main()
{
	//��������
	double calculate(double x, double y, double(*funcname)(double, double));
	double add(double x, double y);
	double minus(double x, double y);

	double firstnum;
	double secondnum;

	using namespace std;

	while (true)
	{
		//��������
		cout << "Enter the first double number:" << endl;
		cin >> firstnum;

		cout << "Enter the second double number:" << endl;
		cin >> secondnum;

		//�Ӽ�
		cout << "The sum of the 2 numbers is " << calculate(firstnum, secondnum, add) << endl;
		cout << "The difference of the 2 numbers is " << calculate(firstnum, secondnum, minus) << endl;
	}
	
	
	return 0;
}


//��������
double calculate(double x, double y, double(*funcname)(double, double))
{
	return (*funcname)(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double minus(double x, double y)
{
	return x - y;
}
