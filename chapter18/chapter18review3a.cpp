//C++ Primer Plus chapter18review3a.cpp
#include <iostream>
using namespace std;

double up(double x)
{
	return 2.0 * x;
}

void r1(const double& rx)
{
	cout << "const double & rx\n";
}

void r1(double& rx)
{
	cout << "double & rx\n";
}

int main()
{
	double w = 10.0;
	r1(w);

	r1(w + 1);

	r1(up(w));

	return 0;
}