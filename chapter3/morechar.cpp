#include <iostream>
int main()
{
	using namespace std;
	//字符使用单引号
	char ch = 'M';
	int i = ch;//将右侧的类型转换为左侧的类型
	//字符串使用双引号
	cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

	cout<<"And one to the character code:"<<endl;
	ch = ch + 1;
	i = ch;
	cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

	cout<<"Displaying char ch using cout.put(ch):";
	cout.put(ch);

	cout.put('!');
	cout<<endl<<"Done"<<endl;
	cin.get();
	return 0;

}