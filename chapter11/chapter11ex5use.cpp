#include "chapter11ex5.h"

int main()
{
	Stonewt st1 = Stonewt();     //default constructor
	std::cout << "st1 is ";
	st1.show_stn();              //show in stone
	std::cout << std::endl;


	Stonewt st2 = Stonewt(26.0, INTPOUNDS);     //constructor
	std::cout << "st2 is ";
	st2.show_stn();                //show in stone,pounds
	std::cout << "=";
	st2.show_lbs();              //show in pounds

	std::cout << "The 1.2 times of the 2nd weight is " << st2 * 1.2;

	std::cout << std::endl;


	Stonewt st3 = Stonewt(2, 10);     //constructor stone,pounds
	std::cout << "st3 is ";
	st3.show_stn();                //show in stone,pounds
	std::cout << "=";
	st3.show_lbs();              //show in pounds
	std::cout << std::endl;

	Stonewt st4 = Stonewt(38.5, DOUBLEPNDS);     //constructor pounds,state
	std::cout << "st4 is " << st4 << "=" << std::endl;  //show in double pounds
	st4.show_stn();                //show in stone,pounds
	std::cout << "=";
	st4.show_lbs();              //show in pounds
	std::cout << std::endl;

	std::cout << "The total weight of st2 and st3 is " << st2 + st3 << std::endl;

	std::cout << "The difference between st3 and st2 is " << st3 - st2 << std::endl;

	std::cout << "The 1.5 times of the 3rd weight is " << 1.5 * st3 << std::endl;

	std::cout << "The total weight of st2 and the 4th weight is " << st2 + st4 << std::endl;

	std::cout << "The difference between st4 and st2 is " << st4 - st2 << std::endl;

	std::cout << "The 2.5 times of the st4 weight is " << 2.5 * st4 << std::endl;

	return 0;
}