//C++ Primer Plus chapter14ex4use.cpp
#include "chapter14ex4.h"
#include <string>
#include <iostream>

const int SIZE = 5;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	Person* lolas[SIZE];

	int ct;

	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;

		cout << "Enter the Person's Occupation:\n"
			<< "g:Gunslinger    p:PokerPlayer\n"
			<< "q:quit\n";

		cin >> choice;

		while (strchr("gpq", choice) == NULL)
		{
			cout << "Please enter a g, p or q: ";

			cin >> choice;
		}

		if (choice == 'q')
			break;

		switch (choice)
		{
		case 'g':
			lolas[ct] = new Gunslinger;

			break;

		case 'p':
			lolas[ct] = new PokerPlayer;
			break;

		case 'b':
			lolas[ct] = new BadDude;
			break;
		}

		cin.get();

		lolas[ct]->Set();
	}

	cout << "\nHere is the Occupation information:" << std::endl;

	for (ct = 0; ct < SIZE; ct++)
	{
		lolas[ct]->Show();
	}

	//for (int i = 0; i < ct; i++)
		//delete lolas[i];

	cout << "Bye.\n";

	return 0;
}