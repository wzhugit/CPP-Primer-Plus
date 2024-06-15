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
	CandyBar * snack = new CandyBar[3];
	* snack = { "Mocha Munch", 2.30, 350 };
	* (snack+1) = { "Dove german",3.50,360 };
	* (snack+2) ={ "Ferrero Roche",5.00,300 } ;
	cout << snack -> brand
		<< ','
		<< snack->weight
		<< ','
		<< snack->caroli
		<< endl
		<< (snack+1)->brand
		<< ','
		<< (snack+1)->weight
		<< ','
		<< (snack+1)->caroli
		<< endl
		<< (snack+2)->brand
		<< ','
		<< (snack+2)->weight
		<< ','
		<< (snack+2)->caroli
		<< endl;
	cin.get();
	return 0;
}