#include <iostream>
int main()
{
	using namespace std;
	cout<<"\aOperation \"HyperHype\" is now activated!\n";
	//打印下划线后将光标移到第一个下划线处
	cout<<"Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin>>code;
	cout<<"\aYou entered "<<code<<"...\n";
	cout<<"\aCode verified:Proceed with Plan Z3!\n";
	return 0;
}