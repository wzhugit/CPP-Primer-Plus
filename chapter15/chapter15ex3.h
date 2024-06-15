//C++ Primer Plus
//chapter15ex2.h -- exception classes for hmean(), gmean()
#ifndef BAD_MEAN_H_
#define BAD_MEAN_H_

#include <iostream>
#include <stdexcept>
#include <string>

class base_exception :public std::logic_error
{
private:
	double param1;
	double param2;

public:
	base_exception(double x, double y) :
		std::logic_error("base_exception aroused."),
		param1(x), param2(y)
	{

	}

	virtual void report() const
	{
		std::cout << "base_exception::base_exception(" << param1 << "," << param2
			<< ") is called " << std::endl;

		std::cout << "void base_exception::report() is called." << std::endl;
	}
};

class derived_hmeanexception :public base_exception
{
public:
	derived_hmeanexception(double x, double y) :
		base_exception(x, y), param1(x), param2(y)
	{

	}

	virtual void report() const
	{
		base_exception::report();

		std::cout << "derived_exception::derived_hmeanexception(" << param1 << "," << param2
			<< ") is called " << std::endl;

		std::cout << "void derived_hmeanexception::report() is called." << std::endl;
	}

	virtual const char* what()
	{
		return "derived_hmeanexception aroused.";
	}

private:
	double param1;
	double param2;
};

class derived_gmeanexception :public base_exception
{
public:
	derived_gmeanexception(double x, double y) :
		base_exception(x, y), param1(x), param2(y)
	{

	}

	virtual void report() const
	{
		base_exception::report();

		std::cout << "derived_exception::derived_gmeanexception(" << param1 << "," << param2
			<< ") is called " << std::endl;

		std::cout << "void derived_gmeanexception::report() is called." << std::endl;
	}

	virtual const char* what()
	{
		return "derived_gmeanexception aroused.";
	}

private:
	double param1;
	double param2;
};

#endif