#include <iostream>
using namespace std;
int main()
{
	const double kilotomile = 62.14/100.00;
	const double galontoliter = 3.875;
	double consumption;
	cout<<"������ŷ�޷�������������:"<<endl;
	cin>>consumption;
	cout<<"�������ĺ�����Ϊ��"<<100.00*kilotomile*1/consumption*galontoliter
		<<"Ӣ��ÿ����"<<endl;
	
	cin.get();
	
	return 0;
}