#include <iostream>
using namespace std;
int main()
{
int degree;
int minute;
double seconds;
const double degreetominute=60;
const double minutetosecond=60;
cout<<"Enter a latitude in degree,minutes and seconds:"<<endl;
cout<<"First,enter the degrees:";
cin>>degree;
cout<<"Next,enter the minutes of arc:";
cin>>minute;
cout<<"Finally,enter the seconds of arc:";
cin>>seconds;

cout<<degree<<" degrees,"<<minute<<" minutes,"<<seconds<<" seconds = "
	<<(double)degree+(double)minute/degreetominute+seconds/minutetosecond/degreetominute
	<<" degrees"<<endl;

cin.get();

return 0;
}