#include <iostream>
int main()
{
	using std::cin;
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	//�������룬һ��һ���ö�ȡ
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << "spaces," << total;
	cout << " characters total in sentence\n";
	return 0;
}
