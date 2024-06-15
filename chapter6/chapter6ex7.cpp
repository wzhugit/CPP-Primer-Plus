//chapter6ex7.cpp
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main()
{
	int count1 = 0;//元音的个数
	int count2 = 0;//辅音的个数
	int other = 0;//其他开头的个数
	string str;
	cout << "Enter words (q to quit) :" << endl;
	while (cin >> str)    //cin>>str会忽略空格，换行符，制表符，并从第一个真正的字符开始
	{
		if (str == "q")
			break;//如果输入q,直接跳出循环
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
