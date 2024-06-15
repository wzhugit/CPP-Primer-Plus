#include <iostream>
#include "chapter13ex4.h"

int main()
{
	{
		Port* port1 = new Port("Gallo", "tawny", 20);

		std::cout << (*port1) << std::endl;

		std::cout << port1->BottleCount() << std::endl;

		Port port2;

		port2 = *port1;

		std::cout << port2.BottleCount() << std::endl;

		port2.Show();

		std::cout << port2 << std::endl;

		VintagePort vinport1("gallo", 24, "Old Velvet", 16);

		std::cout << vinport1 << std::endl;

		VintagePort vinport2(vinport1);

		std::cout << vinport2 << std::endl;

		VintagePort vinport3;

		vinport3 = vinport1;

		std::cout << vinport3 << std::endl;

	}

	return 0;
}