#include <iostream>
#include <string>
//#include <cstdio>


template <typename T>
T * mangle(T * str)//ģ������ֻ��д����������
{
	return str;
}


template <typename T>
char mangle(T str)
{
	return '1';
}
/*
*/




/*template <>
char * mangle<char>(char * str);
*/

int main(void)
{
	//double mass(double density, double volume = 1.0);//Ĭ�ϲ������������У����Ƕ�����
	double mass(double density, double volume);
	double mass(double density);

	void repeat(int times, std::string str);
	void repeat(std::string str);

	using std::string;
	void repeat(int times, string str);

	int average(int num1, int num2);
	double average(double num1, double num2);

	char mangle(char str[100]);
	

	using namespace std;
	

	cout << "density 10,volume 200,then the mass is " << mass(10.0, 200.0) << endl;
	cout << "density 10,volume 1,then the mass is " << mass(10.0) << endl;

	cout << "repeat(10,\"I'm OK\") is ";
	repeat(10, "I'm OK");

	cout << "\nrepeat(\"But You're kind of stupid\") is " << endl;
	
	repeat("But You're kind of stupid");

	cout << "The average of two integer 3 and 6 is " << average(3, 6) << endl;
	cout << "The average of two double 3.0 and 6.0 is " << average(3.0, (double)6) << endl;

	cout << "The mangle(\"I'm glad to meet you\") is " << mangle("I'm glad to meet you") << endl;

	
	char * str = "I'm glad to meet you";
	
	cout << hex;
	//�޷�ʹ��ģ����ɣ�Ҳ�޷�ʹ����������ɣ���Ϊ������������ͬ
	//cout << "The address of \"I'm glad to meet you\" is " << static_cast<void *>(mangle(str)) << endl;
	
	cout << "The address of \"I'm glad to meet you\" is " << static_cast<void *>(str) << endl;//cout������ָ����ʾ��ʽ����Ҫʹ��static_cast<void *>(str)�������ַ
	/*
	//printf("The address of \"I'm glad to meer you\" is %x", str);
	*/

	return 0;
}

double mass(double density, double volume)
{
	return density*volume;
}


double mass(double density)
{
	return density * 1.0;
}

void repeat(int times, std::string str)
{
	for (int n = 0; n < times;n++)
	{ 
		std::cout << std::endl << str;
	}
}

void repeat(std::string str)
{
	for (int n = 0; n < 5; n++)
	{
		std::cout << str << std::endl;
	}
}

int average(int num1, int num2)
{
	return (num1 + num2) / 2;
}

double average(double num1, double num2)
{
	return (num1 + num2) / 2;
}

char mangle(char str[100])
{
	return '1';
}




/*
template <typename T>
T * mangle(T * str)
{
	return str;
}
*/


/*


*/

/*
template <>
char * mangle<char>(char * str)
{
	return str;
}
*/