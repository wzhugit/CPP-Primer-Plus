#include "chapter11ex5.h"

//constructor from double pounds,st controls the target type
Stonewt::Stonewt(double lbs, state st)
{
	stone = int(lbs) / Lbs_per_stn;         //integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	s = st;
}

//construct Stonewt object from stone double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	s = STONE;
}

Stonewt::Stonewt()       //default  constructor, wt = 0
{
	stone = pounds = pds_left = 0;
	s = STONE;
}

Stonewt::~Stonewt()        //destructor
{

}

Stonewt Stonewt:: operator+(Stonewt st)
{
	Stonewt sum = Stonewt();      //default  constructor, wt = 0

	sum.pounds = pounds + st.pounds;
	sum.stone = int(sum.pounds) / Lbs_per_stn;
	sum.pds_left = int(sum.pounds) % Lbs_per_stn + (sum.pounds - int(sum.pounds));
	return sum;

}

Stonewt Stonewt::operator-(Stonewt st)
{
	Stonewt res = Stonewt();      //default  constructor, wt = 0

	res.pounds = pounds - st.pounds;
	res.stone = int(res.pounds) / Lbs_per_stn;
	res.pds_left = int(res.pounds) % Lbs_per_stn + (res.pounds - int(res.pounds));
	return res;

}

Stonewt Stonewt::operator*(double coefficient)
{
	Stonewt res = Stonewt();      //default  constructor, wt = 0

	res.pounds = pounds * coefficient;
	res.stone = int(res.pounds) / Lbs_per_stn;
	res.pds_left = int(res.pounds) % Lbs_per_stn + (res.pounds - int(res.pounds));
	return res;
}

//friend functions
Stonewt operator*(double coefficient, Stonewt stone)
{
	Stonewt res = Stonewt();      //default  constructor, wt = 0

	res.pounds = stone.pounds * coefficient;
	res.stone = int(res.pounds) / Stonewt::Lbs_per_stn;
	res.pds_left = int(res.pounds) % Stonewt::Lbs_per_stn + (res.pounds - int(res.pounds));
	return res;
}


std::ostream& operator<<(std::ostream& os, Stonewt stone)
{
	//show weight in stones
	if (stone.s == STONE)
	{
		os << stone.stone << " Stones," << stone.pds_left << " pounds" << std::endl;
	}

	//show weight in integer pounds
	if (stone.s == INTPOUNDS)
	{
		os << "Integer pounds is " << int(stone.pounds) << " Pounds" << std::endl;
	}

	if (stone.s == DOUBLEPNDS)
	{
		os << "Double pounds is " << stone.pounds << " Pounds" << std::endl;
	}
	return os;
}


void Stonewt::show_stn() const
{
	std::cout << stone << " stone, " << pds_left << " pounds\n";
}

//show weight in pounds
void Stonewt::show_lbs() const
{
	std::cout << pounds << " pounds\n";
}

//conversion functions
Stonewt::operator int() const
{
	return int(pounds + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}