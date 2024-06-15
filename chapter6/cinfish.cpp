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
	//因为fish是double型数组，当输入字符时，由于类型不匹配cin方法的调用将返回false,可以用这种方法来结束输入数字的循环
	cout << "fish #1:";
	int i = 0;
	while (i < Max && cin >> fish[i])     //cin>>fish[i]实际是cin的方法调用，
	                           //该函数返回cin。输入成功转为true,否则为false(此时结束)
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