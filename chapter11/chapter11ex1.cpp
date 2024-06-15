#include "vector.h"
#include <iostream>
#include <fstream>
#include <cstdlib>        //rand(), arand() prototypes

int main()
{
	using namespace std;
	ofstream of;
	of.open("E:\\C++编程练习\\chapter11ex1file.txt");
	//cout << of.is_open();

	using VECTOR::Vector;
	srand(time(0));        //seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";

	cin >> target;
	of << "Target Distance: " << target << ", ";



	cout << "Enter step length:";
	cin >> dstep;
	of << "Step Size: " << dstep << endl;

	of << steps << ": (x,y) = (" << result.xval() << "," << result.yval() << ")" << endl;

	while (result.magval() < target)
	{

		direction = rand() % 360;
		step.reset(dstep, direction, Vector::POL);
		result = result + step;
		of << steps + 1 << ": (x,y) = (" << result.xval() << "," << result.yval() << ")" << endl;
		steps++;
	}

	of << "After " << steps << " steps,the subject "
		"has the following location:\n";
	of << result << endl;
	result.polar_mode();
	of << "or\n" << result << endl;
	of << "Average outward distance per step = "
		<< result.magval() / steps << endl;

	of << "Bye!\n";
	of.close();
	of.clear();

	return 0;
}