//chapter6ex4.cpp
#include <iostream>
struct bop
{
	char fullname[20];//real name
	char title[20];   //job title
	char bopname[20]; //secret BOP name
	int preference;   //0 = fullname,1 = title,2 = bopname
};
int main()
{
	char ch;
	bop b[4] = { { "Wimp Macho","Coder","WM",1 } ,
				{ "Raki Rhodes","Student","RR",2 } ,
				{ "Celia Laiter", "Student2","RR2",2 } ,
				{ "Hoppy Hipman", "dent","ci",0 } };
	using namespace std;
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a.display by name         b.display by title" << endl;
	cout << "c.display by bopname      d.display be preference" << endl;
	cout << "q.quit" << endl;
	
	
	while (1)
	{
		cout << "Enter your choice:";
		cin >> ch;
		cout << endl;


		switch (ch)
		{
		case 'a':
			for (int k = 0; k <= 3; k++)
			{
				cout << b[k].fullname << endl;
			}
			break;
		case 'b':
			for (int k = 0; k <= 3; k++)
			{
				cout << b[k].title << endl;
			}
			break;
		case 'c':
			for (int k = 0; k <= 3; k++)
			{
				cout << b[k].bopname << endl;
			}
			break;
		case 'd':
			for (int k = 0; k <= 3; k++)
			{
				cout << b[k].preference << endl;
			}
			break;
		case 'q':
			break;
		}
		if (ch == 'q')
			break;
	}
	
	return 0;

}