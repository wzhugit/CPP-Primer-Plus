#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int feet;//Ó¢³ß
	int inch;//Ó¢´ç
	double pounds;//ÌåÖØ°õÊı
	const double kilog2pound = 2.2;
	const double inch2meter = 0.0254;
	const int feet2inch = 12;
	double meter;
	double bmi;
	cout<<"Please enter your height(feet part) in feet"<<endl;
	cin>>feet;
	cout<<"Please enter your height(inch part) in inch"<<endl;
	cin>>inch;
	cout<<"Please enter tour weight in pounds:";
	cin>>pounds;
	cout<<"The height in inch is "<<feet*feet2inch+inch<<endl;
	cout<<"The height in meter is "<<(feet*feet2inch+inch)*inch2meter<<endl;
	cout<<"The weight in kilogram is "<<pounds/kilog2pound<<endl;
	cout<<"Your BMI is "<< pounds/kilog2pound / pow((feet*feet2inch+inch)*inch2meter,2)<<endl;
	cin.get();
	return 0;
}