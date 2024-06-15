using namespace std;
#include <iostream>
int main()
{
	double miles;
	double galon;

	cout<<"请输入驱车里程（英里）:"<<endl;
	cin>>miles;
	cout<<"请输入使用汽油量（加仑）："<<endl;
	cin>>galon;
	cout<<"耗油量为一加仑的里程为"<<miles/galon<<"英里"<<endl;
	cin.get();
	return 0;
}