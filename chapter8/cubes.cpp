//C++ Primer Plus example 8.5
//cubes.cpp---regular and reference arguments
#include <iostream>
double cube(double a);
double refcube(double &ra);
int main()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;//引用是别名，而非副本
	return 0;

}

double cube(double a)
{
	a *= a*a;
	return a;
}

double refcube(double &ra)
{
	ra *= ra*ra;
	return ra;
}