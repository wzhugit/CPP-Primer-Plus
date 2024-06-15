//C++ Primer Plus example list 11.15
//randwalk.cpp -- using the Vector class
//compile  with the vect.cpp file
#include <iostream>
#include <cstdlib>        //rand(), arand() prototypes
#include <ctime>          //time() prototype
#include "chapter11ex2.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));        //seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;

		for (; result.magval() <= target; steps++)
		{
			direction = rand() % 360;                //rand()产生大于0的一个随机整数
			step.reset(dstep, direction, Vector::POL);
			result = result + step;

			if (result.magval() > target)
			{
				result = result - step;
				break;
			}


		}

		cout << "After " << --steps << " steps,the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";

	return 0;
}
