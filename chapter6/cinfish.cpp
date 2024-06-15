//cinfish.cpp -- non-numeric input terminates loop
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	//get data
	double fish[Max];
	cout << "Please enter the weight of your fish.\n";
	cout << "You may enter up to " << Max
		 << " fish <q to terminate>.\n";
	//��Ϊfish��double�����飬�������ַ�ʱ���������Ͳ�ƥ��cin�����ĵ��ý�����false,���������ַ����������������ֵ�ѭ��
	cout << "fish #1:";
	int i = 0;
	while (i < Max && cin >> fish[i])     //cin>>fish[i]ʵ����cin�ķ������ã�
	                           //�ú�������cin������ɹ�תΪtrue,����Ϊfalse(��ʱ����)
	{
		if (++i < Max)
			cout << "fish #" << i + 1 << ":";
	}
	//calculate average
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	//report results
	if (i == 0)
		cout << "No fish\n";
	else
		cout << total / i << " = average weight of "
		<< i << " fish\n";
	cout << "Done.\n";
	return 0;
}