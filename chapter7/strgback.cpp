//ch7example7.10
//strgback.cpp -- a function that return a pointer to char
#include <iostream>
char *buildstr(char c, int n);    //prototype
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a character:";
	cin >> ch;
	cout << "Enter an interger:";
	cin >> times;
	char * ps = buildstr(ch, times);

	cout << ps << endl;
	delete[] ps;

	return 0;

}

char *buildstr(char c, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}
