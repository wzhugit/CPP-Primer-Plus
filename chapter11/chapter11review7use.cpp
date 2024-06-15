//C++ Primer Plus chapter11review7use.cpp
#include <iostream>
#include "chapter11review7.h"


int main()
{
	using namespace VECTOR;

	double x;
	double y;

	std::cout << "Enter the x sector of the Vector:" << std::endl;
	std::cin >> x;

	std::cout << "Enter the y sector of the Vector:" << std::endl;
	std::cin >> y;


	double v1 = Vector(x, y, VECTOR::Vector::RECT);

	std::cout << "The magnitude of vector (" << x << "," << y << ") is " << v1 << std::endl;

	return 0;

}