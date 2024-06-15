//textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main()
{
	using namespace std;
	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF)     //test for end-of-file,回车只是输入一个空字符，采用ctrl+z来模拟文件尾
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";
	return 0;
}