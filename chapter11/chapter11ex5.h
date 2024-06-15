//C++ Primer Plus chapter11ex5.h
//stonewt1.h -- revised definition for the Stonewt class
#include <iostream>
#ifndef STONEWT1_H_
#define STONEWT1_H_

enum state { STONE, INTPOUNDS, DOUBLEPNDS };

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };   //pounds per stone
	int stone;                 //whole stones
	double pds_left;           //fractional pounds
	double pounds;             //entire weight in pounds
	state s;                   //controls the target type

public:
	Stonewt(double lbs, state st = STONE);      //constructor from double pounds,st controls the target type
	Stonewt(int stn, double lbs);    //construct from stone,lbs
	Stonewt();                    //default constructor
	~Stonewt();
	void show_lbs() const;         //show weight in pounds format

	Stonewt operator+(Stonewt st);
	Stonewt operator-(Stonewt st);
	Stonewt operator*(double coefficient);

	friend Stonewt operator*(double coefficient, Stonewt stone);

	friend std::ostream& operator<<(std::ostream& os, Stonewt stone);

	void show_stn() const;         //show weight in stone format

	//conversion functions
	operator int() const;
	operator double() const;
};

#endif // !STONEWT1_H_
#pragma once
