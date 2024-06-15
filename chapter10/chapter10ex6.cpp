//C++ Prier Plus chapter10ex6.cpp
//类成员函数的定义
#include "chapter10ex6.h"
#include <iostream>
Move::Move(double a, double b)     //sets x,y to a,b
{
	x = a;
	y = b;
}

void Move::showmove() const                  //shows current x,y values
{
	using namespace std;
	cout << "Current x = " << x << endl;
	cout << "Current y = " << y << endl;
}

//this function adds x of m to x of invoking object to get new x,
//adds y of m to y of invoking object to get new y, creates a new
//move object initialized to new x,y values and returns it
Move Move::add(const Move& m) const
{
	Move addres(this->x + m.x,this->y + m.y);  //use constructor
	return addres;
}

void Move::reset(double a, double b)    //resets x,y to a,b
{
	x = a;
	y = b;
}