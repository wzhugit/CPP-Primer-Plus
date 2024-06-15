#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char str[100];
	int num=0;
	cout << "Enter words (to stop,type the word done).\n";
	cin >> str;
	cin.get();
	while (strcmp(str, "done") != 0)
	{
		num++;
		cin >> str;
		cin.get();
		//只要不输入done程序永远能运行下去
	}
	cout << "You entered a total of " << num << " words." << endl;

	cin.get();
	return 0;

}