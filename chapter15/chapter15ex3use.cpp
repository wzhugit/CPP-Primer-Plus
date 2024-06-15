//C++ Primer Plus
//chapter15ex3use.cpp

#include <iostream>
#include "chapter15ex3.h"

//function prototypes
double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Enter two numbers: ";

	while (cin >> x >> y)
	{
		try                       //start of try block
		{
			z = hmean(x, y);

			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;

			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;

			cout << "Enter next set of numbers <q to quit>: ";
		}    //end of try block

		catch (base_exception& hg)    //start of catch block
		{
			try
			{
				derived_hmeanexception& dh = dynamic_cast<derived_hmeanexception&>(hg);     //if no exception aroused then dh is derived_hemanexception&
				dh.report();
				cout << dh.what();
			}

			catch (std::bad_cast)                     //exception occurs ,which means hg is base_gmeanexception&
			{
				hg.report();

				cout << hg.what();

				break;
			}
		}


	}

	cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw derived_hmeanexception(a, b);

	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw derived_gmeanexception(a, b);

	return std::sqrt(a * b);
}
