//C++ Primer Plus chapter11ex3use.cpp
//randwalk.cpp -- using the Vector class
//compile  with the vect.cpp file
#include <iostream>
#include <cstdlib>        //rand(), arand() prototypes
#include <ctime>          //time() prototype
#include <cmath>
#include "chapter11ex3.h"

int main()
{
	int N;    //the number of the tests, provided by users

	unsigned int max(int ar[], int size);   //find the max of the array
	unsigned int min(int ar[], int size);   //find the min of the array
	unsigned int average(int ar[], int size);   //calculate the average of the array
	//double myround(double r);   //圆整函数

	using namespace std;
	using VECTOR::Vector;
	srand(time(0));        //seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	cout << "Enter the number of tests:" << endl;

	cin >> N;

	int stepsarr[100] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cout << "Enter target distance (q to quit):";

		double target = 0.0;

		cin >> target;

		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		stepsarr[i] = steps;

		cout << "After " << steps << " steps,the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";

		cout << "Bye!\n";

		cout << "The most step number is " << max(stepsarr, N) << endl;
		cout << "The least step number is " << min(stepsarr, N) << endl;
		cout << "The average step number is " << average(stepsarr, N) << endl;
	}

	return 0;
}



unsigned int max(int ar[], int size)   //find the max of the array
{
	int max = ar[0];

	for (int i = 1; i < size; i++)
	{
		if (ar[i] >= max)
			max = ar[i];
		else
			continue;
	}
	return max;
}

unsigned int min(int ar[], int size)   //find the min of the array
{
	int min = ar[0];

	for (int i = 1; i < size; i++)
	{
		if (ar[i] <= min)
			min = ar[i];
		else
			continue;
	}
	return min;
}

unsigned int average(int ar[], int size)   //calculate the average of the array
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += ar[i];
	}

	return round(1.0 * sum / size);

}

/*
double myround(double r)
{
	return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
}
*/