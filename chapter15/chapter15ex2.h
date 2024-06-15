//C++ Primer Plus
//chapter15ex2.h -- exception classes for hmean(), gmean()
#ifndef BAD_MEAN_H_
#define BAD_MEAN_H_

#include <iostream>
#include <stdexcept>
#include <string>


class bad_hmean :public std::logic_error
{

public:
	bad_hmean(double x, double y) :std::logic_error(std::string("hmean(") + std::to_string(x) + "," + std::to_string(y) + "). Invalid arguments : a = -b\n")
	{

	}

	const char* what()
	{

		return logic_error::what();
	}


};



class bad_gmean :public  std::logic_error
{
public:

	bad_gmean(double x, double y) :std::logic_error(std::string("gmean(") + std::to_string(x) + ", " + std::to_string(y) + ").Invalid arguments.gmean() arguments should be >= 0\n")
	{

	}

	const char* what()
	{
		return logic_error::what();
	}


};

#endif