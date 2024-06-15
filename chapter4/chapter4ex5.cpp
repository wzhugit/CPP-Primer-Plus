#include <iostream>
struct CandyBar
{
	char brand[15];
	double weight;
	int caroli;
};


int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch",2.3,350 };
	cout << snack.brand
		<<endl
		<< snack.weight
		<<endl
		<< snack.caroli;
	cin.get();
	return 0;
}