//C++ Primer Plus chapter9ex1.cpp
#include <iostream>
#include <cstring>
#include "golf.h"
#include <string>

//non-interactive version
//function sets golf structure to provided name,handicap
//using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

//interactive version:
//function solicits(«Î«Û) name and handicap from user
//and sets the members of g to the values entered
//return 1 if name is entered, 0 if name is empty string
int setgolf(golf & g)
{

	std::cout << "Enter handicap:" << std::endl;
	if (std::cin >> g.handicap)
	{
		std::cout << "Enter name:" << std::endl;
		if (std::cin >> g.fullname)
		{
			return 1;
		}
		else
			return 0;
	}

	else
		return 0;
}

//function resets handicap to new value
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

//function displays contents of golf structure
void showgolf(const golf & g)
{
	std::cout << "fullname:" << g.fullname << std::endl;
	std::cout << "handicap:" << g.handicap << std::endl;
}