//chapter6ex8.cpp
#include <fstream>//�ļ���дͷ�ļ�
#include <iostream>
int main()
{
	using namespace std;
	ifstream fi;                                   //����һ���ļ��������
	char ch;
	int numofchar = 0;
	fi.open("C:\\Users\\Jack\\Desktop\\file.txt");  //��ȡ����·�����ļ���
	while (fi >> ch)
	{
		numofchar++;

	}
	fi.close();
	cout << "There are " << numofchar << " characters\n";

	return 0;



}