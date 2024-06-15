//C++ Primer plus chapter15ex1use.cpp
#include <iostream>
#include "chapter15ex1.h"

int main()
{
	Tv T1(Tv::On, 5, 100, 25, Tv::Cable, Tv::TV);

	Remote R1(Tv::TV, Remote::REGULAR);

	T1.settings();     //display all TV settings
	std::cout << std::endl;
	R1.show_mode();     //display all REMOTE settings

	T1.volup();

	T1.chanup();

	T1.settings();     //display all TV settings


	std::cout << std::endl;
	std::cout << std::endl;

	T1.ChangeMode(R1);
	T1.settings();     //display all TV settings

	std::cout << std::endl;

	R1.show_mode();     //display all REMOTE settings


	T1.onoff();    //switch On/Off

	T1.settings();

	return 0;
}