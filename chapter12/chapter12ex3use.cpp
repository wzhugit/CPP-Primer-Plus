// C++ Primer Plus chapter12ex3use.cpp


#include <iostream>
#include "chapter12ex3.h"

const int STKS = 4;

int main()
{
	{
		//create an array of initialized objects
		Stock stocks[STKS] = {
			Stock("NanoSmart",12,20.0),
			Stock("Boffo Objects",200,2.0),
			Stock("Monolithic Obelisks",130,3.25),
			Stock("Fleep Enterprises",60,6.5)
		};

		std::cout << "Stock holdings:\n";
		int st;

		for (st = 0; st < STKS; st++)
			std::cout << stocks[st];

		//set pointer to first element
		const Stock* top = &stocks[0];

		for (st = 1; st < STKS; st++)
			top = &top->topval(stocks[st]); //call total_val methods. Return the Stock object with higher total_valַ

		//now top points to the most valuable holding
		std::cout << "\nMost valuable holding:\n";
		std::cout << (*top);
	}
	return 0;

}