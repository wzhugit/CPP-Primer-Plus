#include <iostream>
using namespace std;
int main()
{
	const double kilotomile = 62.14/100.00;
	const double galontoliter = 3.875;
	double consumption;
	cout<<"请输入欧洲风格的汽车耗油量:"<<endl;
	cin>>consumption;
	cout<<"美国风格的耗油量为："<<100.00*kilotomile*1/consumption*galontoliter
		<<"英里每加仑"<<endl;
	
	cin.get();
	
	return 0;
}