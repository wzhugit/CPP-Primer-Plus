#include <iostream>
#include <array>
#include <cmath>
int main()
{
	using namespace std;
	array <double, 3> mark;
	cout << "输入第一次40码跑的成绩：" << endl;
	cin >> mark[0];
	cout << "输入第二次40码跑的成绩：" << endl;
	cin >> mark[1];
	cout << "输入第三次40码跑的成绩：" << endl;
	cin >> mark[2];
	cout << "次数3"
		<< "平均成绩："
		<< (mark[0] + mark[1] + mark[2]) / 3
		<< endl;
	cin.get();
}