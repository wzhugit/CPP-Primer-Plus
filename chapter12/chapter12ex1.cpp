#include "chapter12ex1.h"
#include <cstring>
#include <iostream>

Cow::Cow()                   //default constructor
{
#pragma warning(suppress : 4996)
	strcpy(name, "default name");

	hobby = new char[20];

#pragma warning(suppress : 4996)
	strcpy(hobby, "default hobby");

	weight = 50;     //default weight
}

Cow::Cow(const char* nm, const char* ho, double wt)           //constructor #1
{
#pragma warning(suppress : 4996)
	strcpy(name, nm);
	hobby = new char[20];
#pragma warning(suppress : 4996)
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)                         //constructor #2
{
#pragma warning(suppress : 4996)
	strcpy(name, c.name);
	hobby = new char[20];
#pragma warning(suppress : 4996)
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	std::cout << name << " is destroyed." << std::endl;
}

Cow& Cow::operator=(const Cow& c)
{
#pragma warning(suppress : 4996)
	strcpy(name, c.name);
#pragma warning(suppress : 4996)
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "The name is " << name << std::endl;
	std::cout << "The hobby is " << hobby << std::endl;
	std::cout << "The weight is " << weight << std::endl;
}
