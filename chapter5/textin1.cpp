//textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters;enter # to quit:\n";
	cin >> ch;//ch中存着的是字符数组而非以‘\0’结尾的字符串，不以空字符或空格作为结束
	//与以前的情形不同，以前是接受两个参数赋值给两个变量，此处仅一个变量，不会产生问题
	while (ch != '#')
	{
		cout << ch <<endl;
		++count;
		cin >> ch;//读取用户输入
	}
	cout << endl << count << " characters read\n";
	cin.get();
	return 0;
}