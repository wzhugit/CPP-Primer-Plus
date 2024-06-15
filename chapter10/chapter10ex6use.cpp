#include <iostream>
#include "chapter10ex6.h"

int main()
{
	Move movobj1;      //call default constructor
	movobj1.showmove();    //call member functions

	Move movobj2 = Move(20, 30);    //call constructor
	movobj2.showmove();   //call member functions

	movobj1.reset(34,20);      //reset member to 34 20
	movobj1.showmove();    //call member functions

	Move movobjres = movobj1.add(movobj2);   //add obj1.x and ob2.x; add obj1.y and ob2.y
	movobjres.showmove();

	return 0;

}