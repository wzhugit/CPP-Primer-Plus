#include <iostream>
#include "chapter12ex1.h"

int main()
{
	{
		Cow c1;      //use default constructor
		c1.ShowCow();

		Cow c2 = Cow("Cow 2", "Tennis", 20.5);         //use constructor #1
		c2.ShowCow();

		Cow c3 = Cow("Cow 3", "Basketball", 16.8);

		std::cout << "Original c3 is:" << std::endl;
		c3.ShowCow();

		Cow c4 = c3;  //use constructor #2, the copy constructor
		std::cout << "c4 is:" << std::endl;
		c4.ShowCow();

		c3 = c2;    //= operator
		std::cout << "After c3 = c2, c3 is:" << std::endl;
		c3.ShowCow();

	}
	return 0;
}