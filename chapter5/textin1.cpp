//textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters;enter # to quit:\n";
	cin >> ch;//ch�д��ŵ����ַ���������ԡ�\0����β���ַ��������Կ��ַ���ո���Ϊ����
	//����ǰ�����β�ͬ����ǰ�ǽ�������������ֵ�������������˴���һ�������������������
	while (ch != '#')
	{
		cout << ch <<endl;
		++count;
		cin >> ch;//��ȡ�û�����
	}
	cout << endl << count << " characters read\n";
	cin.get();
	return 0;
}