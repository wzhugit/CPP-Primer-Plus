//dma.cpp -- dma class methods

#include "chapter13ex3.h"
#include <cstring>
#include <iostream>

//baseABC method
baseABC::baseABC()
{
	label = new char[5];
	label[0] = '\0';

#pragma warning(suppress : 4996)
	std::strcpy(label, "null");

	rating = 0;
}


//baseDMA methods
baseDMA::baseDMA(const char* l, int r)
{
	label = new char[std::strlen(l) + 1];

#pragma warning(suppress : 4996)
	std::strcpy(label, l);

	rating = r;
}

baseDMA::baseDMA(const baseDMA& rs)
{
	label = new char[std::strlen(rs.label) + 1];

#pragma warning(suppress : 4996)
	std::strcpy(label, rs.label);

	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;

	delete[] label;
	label = new char[std::strlen(rs.label) + 1];

#pragma warning(suppress : 4996)
	std::strcpy(label, rs.label);

	rating = rs.rating;
	return *this;
}

void baseDMA::View() const
{
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

//lacksDMA methods
lacksDMA::lacksDMA(const char* c)
{

	color[39] = '\0';

#pragma warning(suppress : 4996)
	std::strcpy(color, c);
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
	os << "Color: " << ls.color << std::endl;
	return os;
}

void lacksDMA::View() const
{
	std::cout << "The Color is " << color << std::endl;
}

lacksDMA::~lacksDMA()
{
	//delete[] color;
}


//hasDMA methods
hasDMA::hasDMA(const char* s)
{
	style = new char[std::strlen(s) + 1];

#pragma warning(suppress : 4996)
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs)          //invoke base class copy  constructor
{
	style = new char[std::strlen(hs.style) + 1];

#pragma warning(suppress : 4996)
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
		return *this;

	delete[] style;             //prepare for new style
	style = new char[std::strlen(hs.style) + 1];

#pragma warning(suppress : 4996)
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os << "Style: " << hs.style << std::endl;
	return os;
}

void hasDMA::View() const
{
	std::cout << "Style: " << style << std::endl;
}