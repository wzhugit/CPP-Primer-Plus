#include <iostream>
using namespace std;
int main()
{
	long seconds;
	const long daytohour = 24;
	const long hourtominute = 60;
	const long minutetosecond = 60;

	cout<<"Enter the number of seconds:"
		<<endl;
	cin>>seconds;
	cout<<seconds<<" seconds = "<<seconds/daytohour/hourtominute/minutetosecond<<" days,"
		<<(seconds-seconds/daytohour/hourtominute/minutetosecond*daytohour*hourtominute*minutetosecond)/minutetosecond/hourtominute<<" hours,"
		<<(seconds-seconds%minutetosecond)/hourtominute%minutetosecond<<" minutes,"
		<<seconds%minutetosecond<<" seconds."<<endl;
	
	cin.get();
	return 0;
}