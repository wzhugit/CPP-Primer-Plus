#include <iostream>
int main()
{
	using namespace std;
	//�ַ�ʹ�õ�����
	char ch = 'M';
	int i = ch;//���Ҳ������ת��Ϊ��������
	//�ַ���ʹ��˫����
	cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

	cout<<"And one to the character code:"<<endl;
	ch = ch + 1;
	i = ch;
	cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

	cout<<"Displaying char ch using cout.put(ch):";
	cout.put(ch);

	cout.put('!');
	cout<<endl<<"Done"<<endl;
	cin.get();
	return 0;

}