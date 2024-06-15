//cingolf.cpp -- non-numeric input skipped
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	//get data
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round # " << i + 1 << < ":";
		while (!(cin >> golf[i]))
		{
			cin.clear();//重置输入（清空输入流中的信息），将先前留在内存中的不符合要求的字符清除，缺少此句将拒绝输入
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a nunber:";
		}
	}
	//calculate average
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	//report results
	cout << total / Max << " = average score "
		<< Max << "rounds.\n";
	return 0;
}