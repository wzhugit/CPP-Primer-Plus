//C++ Primer Plus chapter7ex2
//Ҫ���û��������10���߶���ɼ���
//���������һ�������С������û�����������룬
//����һ������ʾ���гɼ���ʹ��3�����鴦�����������룬��ʾ�ͼ���ƽ���ɼ�
#include <iostream>
int main()
{
	//��������

	void input(double grade[], int length);//��������ĺ���
	void show(double * pt,int length);//������ʾ�ĺ���
	double avg(double * grade, int length);//����ƽ���ɼ��ĺ���

	//��������
	//����
	std::cout << "Please enter the number of the grades (maximam 10)";
	int number;
	std::cin >> number;

	double grade[10] = {0,0,0,0,0,0,0,0,0,0};
	input(grade,number);

	//��ʾ
	show(grade, 10);

	//����ƽ���ɼ�
	std::cout << "The average grade is " << avg(grade,number)<<std::endl;
	return 0;
}

//��������ĺ���
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

//������ʾ�ĺ���
void show(double * pt, int length)
{
	for (int n = 0; n < length; n++)
	{
		using namespace std;
		cout << *pt<<" ";
		pt++;
	}
	
}

//����ƽ���ɼ��ĺ���
double avg(double * grade, int length)
{
	double sum = 0.0;

	for (int i = 0; i < length; i++)
	{
		sum += grade[i];
	}

	return 1.0*sum / length;
}