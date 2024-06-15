#include "chapter13ex4.h"
#include <iostream>
#include <cstring>          //for strcpy(),strlen()


//Port methods
Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	brand[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(brand, br);       //to     from


	style[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(style, st);       //to     from

	bottles = b;

}

Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	brand[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(brand, p.brand);       //to     from

	style[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(style, p.style);       //to     from

	bottles = p.bottles;

}

Port& Port::operator=(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	brand[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(brand, p.brand);       //to     from

	style[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(style, p.style);       //to     from

	bottles = p.bottles;

	return *this;

}

Port& Port::operator+=(int b)        //adds b to bottles
{
	bottles += b;
	return *this;
}

Port& Port::operator-=(int b)        //substract b to bottles
{
	if (bottles >= b)
		bottles -= b;
	else
		bottles = 0;

	return *this;
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl;

	std::cout << "Kind: " << style << std::endl;

	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Port& p)
{
	os << p.brand << "," << p.style << "," << p.bottles;

	return os;
}


//VintagePort methods
VintagePort::VintagePort()
{
	Port::Port();    //initialize the base part
	nickname = (char*)"The Noble";
	year = 1930;
}

VintagePort::VintagePort(const char* br,
	int b, const char* nn, int y) :Port(br, "vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	nickname[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(nickname, nn);       //to     from

	year = y;
}


VintagePort::VintagePort(const VintagePort& vp) :Port((Port)vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	nickname[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(nickname, vp.nickname);       //to     from

	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	*this = vp;

	nickname = new char[strlen(vp.nickname) + 1];

#pragma warning(suppress : 4996)
	strcpy(nickname, vp.nickname);       //to     from

	year = vp.year;

	return *this;
}

void VintagePort::Show() const
{
	Port::Show();

	std::cout << "Nickname: " << nickname << std::endl;

	std::cout << "Year: " << year << std::endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (Port)vp << std::endl;
	os << "Nickname: " << vp.nickname << std::endl;
	os << "Year: " << vp.year << std::endl;

	return os;
}


