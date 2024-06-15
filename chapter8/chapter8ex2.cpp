//C++ Primer Plus ±‡≥Ã¡∑œ∞
//chapter8ex2.cpp
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	
	//using std::string;
	string brandname;
	double weight;
	int heat;
};

int main()
{
	
	using namespace std;
	
	void Setmembers(CandyBar & candybar, char * charpointer = "Millennium Munch", double weight = 2.85, int heat = 350);

	void ShowMembers(const CandyBar & candybar);

	CandyBar candybar1;
	CandyBar candybar2;

	Setmembers(candybar1);

	ShowMembers(candybar1);

	Setmembers(candybar2,"Ferrero",22.5,100);
	ShowMembers(candybar2);

	return 0;
}



void Setmembers(CandyBar & candybar, char * charpointer, double weight, int heat)
{
	candybar.brandname = charpointer;
	candybar.weight = weight;
	candybar.heat = heat;

}

void ShowMembers(const CandyBar & candybar)
{
	cout << "The candy brand is " << candybar.brandname << endl;
	cout << "The candy weight is " << candybar.weight << endl;
	cout << "The heat that candy constains is " << candybar.heat << endl;
}