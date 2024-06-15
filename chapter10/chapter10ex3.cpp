//C++ Primer Plus chapter10ex3.cpp实现文件
#include "chapter10ex3.h"
#include <iostream>
#include <string>
using std::string;

//non-interactive version
//constructor sets golf to provided name,handicap
//using values passed as arguments to the constructor
golf::golf(const std::string name, int hc)
{
	fullname = name;
	handicap = hc;
}

//interactive version (default constructor)
//function solicits name and handicap from user
//and sets the members of g to the values entered
golf::golf()
{
	using namespace std;
	cout << "Enter handicap:" << endl;

	cin >> handicap;

	cin.get();

	cout << "Enter the name:" << endl;
	getline(cin,fullname);       //getline()是string类的专有函数
}


//setgolf() interactive version, but use constructor
golf golf::setgolf()
{
	std::cout << "Enter handicap:" << std::endl;
	if (std::cin >> handicap)
	{
		std::cout << "Enter name:" << std::endl;
		if (getline(std::cin,fullname))
		{
			golf(fullname, handicap);
		}
		
	}
	return *this;

}


//function resets handicap to new value
void golf::resethandicap(int hc)
{
	handicap = hc;
}

void golf::showgolf() const
{
	std::cout << "The fullname is " << fullname << std::endl;
	std::cout << "The handicap of " << fullname << " is " << handicap << std::endl;
}