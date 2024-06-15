//dma.cpp -- dma class methods

#include "dma.h"
#include <cstring>

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

std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

//lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r)
	:baseDMA(l, r)
{
#pragma warning(suppress : 4996)
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs) :
	baseDMA(rs)
{
#pragma warning(suppress : 4996)
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
	os << (const baseDMA&)ls;
	os << "Color:" << ls.color << std::endl;
	return os;
}

//hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r) :baseDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
#pragma warning(suppress : 4996)
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const baseDMA& rs) :baseDMA(rs)
{
	style = new char[std::strlen(s) + 1];
#pragma warning(suppress : 4996)
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs) :baseDMA(hs)     //invoke base class copy constructor
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

	baseDMA::operator=(hs);    //copy base portion
	delete[] style;      //prepare for new style
	style = new char[std::strlen(hs.style) + 1];
#pragma warning(suppress : 4996)
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os << (const baseDMA&)hs;       //强制转换以使用基类的友元，use forced trasnform to use the friend of base class
	os << "Style: " << hs.style << std::endl;     //friend of hasDMA has the right to access to the private member of hasDMA
	//hasDMA的友元可以访问hasDMA的私有成员，但友元关系不能传递
	return os;
}