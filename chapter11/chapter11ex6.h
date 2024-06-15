//C++ Primer Plus chapter11ex6.h
//C++ Primer Plus example list 11.16
//stonewt.h -- definition for the Stonewt class
#include <iostream>
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };   //pounds per stone
	int stone;                 //whole stones
	double pds_left;           //fractional pounds


public:
	double pounds;             //entire weight in pounds
	Stonewt(double lbs);       //constructor for double pounds
	Stonewt(int stn, double lbs);  //constructor for stone, lbs
	Stonewt();                    //default constructor
	~Stonewt();

	void show_lbs() const;     //show weight in  pounds format
	void show_stn() const;     //show weight in stone format

	bool operator<(const Stonewt st) const;    //compare pounds member
	bool operator>(const Stonewt st) const;
	bool operator<=(const Stonewt st) const;
	bool operator>=(const Stonewt st) const;
	bool operator==(const Stonewt st) const;
	bool operator!=(const Stonewt st) const;

	friend std::istream& operator>>(std::istream& is, const Stonewt& st);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};

#endif // !STONEWT_H_


