#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int caroli;
};


int main()
{
	using namespace std;
	struct CandyBar snack[3] = {
		{ "Mocha Munch", 2.30, 350 },
	{ "Dove german",3.50,360 },
	{ "Ferrero Roche",5.00,300 }};
	cout << snack[0].brand
		<< ','
		<< snack[0].weight
		<< ','
		<< snack[0].caroli
		<<endl
		<< snack[1].brand
		<<','
		<< snack[1].weight
		<<','
		<< snack[1].caroli
		<<endl
		<< snack[2].brand
		<<','
		<< snack[2].weight
		<<','
		<< snack[2].caroli
		<<endl;
	cin.get();
	return 0;
}