//chapter6ex7.cpp
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main()
{
	int count1 = 0;//Ԫ���ĸ���
	int count2 = 0;//�����ĸ���
	int other = 0;//������ͷ�ĸ���
	string str;
	cout << "Enter words (q to quit) :" << endl;
	while (cin >> str)    //cin>>str����Կո񣬻��з����Ʊ�������ӵ�һ���������ַ���ʼ
	{
		if (str == "q")
			break;//�������q,ֱ������ѭ��
		char ch = str[0];
		if (isalpha(ch))
		{
			switch (ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count1++;
				break;
			default:
				count2++;
				break;
			}
		}
		else
			other++;
	}

	cout << count1 << " words beginning with vowels" << endl;
	cout << count2 << " words beginning with consonants" << endl;
	cout << other << " others" << endl;

	return 0;
}
