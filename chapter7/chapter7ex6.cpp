//C++ Primer Plus chapter7ex6.cpp
//��дһ������ʹ�����º�����
//Fill_array()��һ��duble��������ƺͳ�����Ϊ����������ʾ����doubleֵ��
//������Щֵ�洢�������С������鱻�������û������˷�����ʱ�����뽫ֹͣ��������ʵ�������˶��ٸ����֡�

//Show_array()��һ��duble��������ƺͳ�����Ϊ����������ʾ�����������
//Reverse_array()��һ��double��������ƺͳ�����Ϊ�����������洢�������е�ֵ��˳��ת��

//����ʹ����Щ����������飬Ȼ����ʾ���飻��ת���飬Ȼ����ʾ����

#include <iostream>
#include <vector>
int main()
{
	using namespace std;
	
	void Fill_array(double digitarray[],int length);//��doubleֵ�������飬�����鱻�����������˷�����ʱ�����뽫ֹͣ
	void Show_array(double numarray[], int length);
	void Reverse_array(double arrayname[], int length);//��Ϊ���鲻�ܱ��������ʺ������ܷ�������
	double *reversed;//���ڱ��淴ת�������
	double originarray[1000]{ 0 };//����������鲢�����ʼ��
	//double reversarray[1000]{ 0 };//����������鲢�����ʼ��
	double * reversedarray;
	int arraylength;//���鳤��

	//ʹ�ú���
	//�������

	cout << "Enter the number of the double numbers you want to enter:";
	cin >> arraylength;
	
	Fill_array(originarray,arraylength);

	//��ʾ����
	Show_array(originarray, arraylength);

	//��ת���鲢��ʾ
	
	Reverse_array(originarray, arraylength);

}

void Fill_array(double digitarray[], int length)
{
	using namespace std;
	cout << "enter the first number:" << endl;
	
	int i;

	for (i = 0; i < length; i++)
	{
		if (cin >> digitarray[i])//�������digitarray[i]��
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