#include <iostream>
using namespace std;
int main()
{
	double heightinfeet;
	const int feet2inch=12;//·ûºÅ³£Á¿
	int inch;
	int feet;
	cout<<"Please enter your height(integer) in feet:_____\b\b\b\b\b";
	cin>>heightinfeet;
	inch=(int)heightinfeet/feet2inch;
	feet=(int)heightinfeet%feet2inch;
	cout<<"The height in feet and inch is "<<inch<<" inch "<<feet<<" feet"<<endl;
	cin.get();
	return 0;
}