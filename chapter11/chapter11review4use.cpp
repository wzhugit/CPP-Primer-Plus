//C++ Primer Plus chapter11review4use.cpp
#include <iostream>
#include "chapter11review4.h"

int main()
{
	using namespace std;
	Stonewt Stone1 = Stonewt(10, 8);
	Stone1.show_stn();
	Stone1.show_lbs();

	2.5 * Stone1;

	return 0;
}