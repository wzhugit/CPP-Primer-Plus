//C++ Primer Plus example list 13.5
//tabtenn1.cpp -- simple base-class methods

#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) :firstname(fn), lastname(ln), hasTable(ht)    //constructor initialize list构造函数初始化列表
{

}

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

//RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r, const string& fn, const string& ln, bool ht) :TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) :TableTennisPlayer(tp), rating(r)
{

}
