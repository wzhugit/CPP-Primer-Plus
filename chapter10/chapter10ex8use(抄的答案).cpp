#include <iostream>
#include "chapter10ex8.h"

int main()
{
	using std::cin;
	using std::cout;

	char ch;
	Student st;
	List l;
	showmenu();
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (!isalpha(ch))
		{
			cout << "You must input a letter.\n"
				"Your choice is: ";
			continue;
		}

		switch (ch)
		{
		case 'a':
		case 'A':
			if (l.isfull())
			{
				cout << "List already full.\n";
			}
			else
			{
				cout << "Enter fullname: ";
				cin.getline(st.fullname, 25);
				cout << "Enter age: ";
				cin >> st.age;
				cout << "Enter ID: ";
				cin >> st.ID;
				l.add_data(st);
			}
			break;

		case 'd':
		case 'D':
			l.del_data();
			break;

		case 'i':
		case 'I':
			if (l.isempty())
			{
				cout << "Clould not plus empty list.\n";
			}
			else
			{
				l.visit(IDplus);
				cout << "Every student ID +100000.\n";
			}
			break;

		case 'p':
		case 'P':
			if (l.isempty())
			{
				cout << "Clould not plus empty list.\n";
			}
			else
			{
				l.visit(ageplus);
				cout << "Every student age +1.\n";
			}
			break;

		case 's':
		case 'S':
			l.show();
			break;

		default:
			cout << "Unknown choice.\n";
			break;
		}
		showmenu();
	}
}
