//C++ Primer Plus chapter11ex6.cpp
//stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "chapter11ex6.h"

//consruct  Stonewt object from double pounds value
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;     //integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

//construct Stonewt object from stone, double pounds values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()            //default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         //destructor
{

}

//show weight in stones
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

//show weight in pounds
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

bool Stonewt::operator<(const Stonewt st) const    //compare pounds member
{
	return pounds < st.pounds;
}

bool Stonewt::operator>(const Stonewt st) const
{
	return pounds > st.pounds;
}

bool Stonewt::operator<=(const Stonewt st) const
{
	return pounds <= st.pounds;
}

bool Stonewt::operator>=(const Stonewt st) const
{
	return pounds >= st.pounds;
}

bool Stonewt::operator==(const Stonewt st) const
{
	return pounds == st.pounds;
}

bool Stonewt::operator!=(const Stonewt st) const
{
	return pounds != st.pounds;
}

std::istream& operator>>(std::istream& is, const Stonewt& st)
{
	is >> st.pounds;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
	os << st.pounds << " pounds" << std::endl;
	return os;
}