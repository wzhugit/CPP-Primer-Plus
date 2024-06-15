//C++ Primer Plus chapter13ex3use.cpp
#include "chapter13ex3.h"
#include <iostream>
#include <string>

const int CLIENTS = 4;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	using std::string;
	{
		baseABC* p_clients[CLIENTS]{};

		string temp;

		char typenum;

		int rating;

		char* color;

		char* style;


		for (int i = 0; i < CLIENTS; i++)
		{

			cout << "Enter 1 for baseDMA account , enter 2 for lacksDMA account or enter 3 for hasDMA account:";
			cin >> typenum;

			cin.get();


			switch (typenum)
			{
			case '1':               //baseDMA
				cout << "Please enter label:" << endl;

				getline(cin, temp);

				cout << "Please enter rating (interger):" << endl;

				cin >> rating;

				p_clients[i] = new baseDMA(temp.c_str(), rating);

				break;

			case '2':              //lacksDMA

				cout << "Please enter a color:" << endl;

				color = new char[41];

				color[0] = '\0';

				cin >> color;

				p_clients[i] = new lacksDMA(color);

				break;

			case '3':                //hasDMA
				cout << "Enter the Style:" << endl;

				//cin.get();

				style = new char[41];


				cin.getline(style, 41);

				p_clients[i] = new hasDMA(style);

				break;

			}
		}

		for (int i = 0; i < CLIENTS; i++)
		{
			(*p_clients[i]).View();
		}
	}

	return 0;
}