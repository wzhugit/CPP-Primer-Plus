//chapter6ex3.cpp
#include <iostream>
int main()
{
	using namespace std;
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore                  p) pianist\n";
	cout << "t) tree                       g) game\n";
	cout << "f" << endl;
	cout << "Please enter a c,p,t, or g:";


	char ch;
	while (cin >> ch)
	{
		if (ch == 'c' || ch == 'p' || ch == 't' || ch == 'g')
		{
			switch (ch)
			{
			case 'c':
				cout << "A maple is a carnivore"<<endl;
				break;
			case 'p':
				cout << "A maple is a pianist"<<endl;
				break;
			case 't':
				cout << "A maple is a tree"<<endl;
				break;
			case 'g':
				cout << "A maple is a game"<<endl;
				break;
			}
			break;
		}
		else
		{
			cout << "Please enter a c,p,t, or g:";
			continue;
		}
	}
	

	return 0;


}