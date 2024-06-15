//C++ Primer Plus chapter14ex5.cpp

#include "chapter14ex5.h"


abstr_emp::abstr_emp() :fname("Firstname"), lname("Lastname"), job("Default Job")
{

}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln,
	const std::string& j) :fname(fn), lname(ln), job(j)
{

}

void abstr_emp::ShowAll() const       //labels and shows all data
{
	std::cout << "The Name of the Employee is :" << fname << ' ' << lname << std::endl;

	std::cout << "The Employee's Job is :" << job << std::endl;
}

void abstr_emp::SetAll()         //prompts user for values

{
	std::cout << "Please enter the Employee's First Name:" << std::endl;

	std::cin >> fname;

	std::cout << "Please enter the Employee's the Last Name:" << std::endl;

	std::cin >> lname;

	std::cout << "Please enter the Employee's Job:" << std::endl;

	getline(std::cin, job);

}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << "The Employee is " << e.fname << ' ' << e.lname << std::endl;

	os << "The Employee's Job is " << e.job << std::endl;

	return os;
}

abstr_emp::~abstr_emp()
{

}

employee::employee() :abstr_emp()
{

}

employee::employee(const std::string& fn, const std::string& ln,
	const std::string& j) :abstr_emp(fn, ln, j)
{

}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager() :abstr_emp(), inchargeof(1)
{

}

manager::manager(const std::string& fn, const std::string& ln,
	const std::string& j, int ico) :abstr_emp(fn, ln, j), inchargeof(ico)
{

}

manager::manager(const abstr_emp& e, int ico) :inchargeof(ico)
{


}

manager::manager(const manager& m)   //copy constructor
{
	*this = m;
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();    //call the parent method

	std::cout << "The number of the staffs that\
 manager is in charge of is " << inchargeof << std::endl;

}

void manager::SetAll()
{
	abstr_emp::SetAll();      //call the parent method

	std::cout << "Please enter the Number of Employees whom the Manager is in charge of:" << std::endl;

	std::cin >> inchargeof;
}

fink::fink() :abstr_emp()
{

}

fink::fink(const std::string& fn, const std::string& ln,
	const std::string& j, const std::string rpo) :
	abstr_emp(fn, ln, j), reportsto(rpo)
{

}

fink::fink(const abstr_emp& e, const std::string& rpo)
	:reportsto(rpo)
{

}

fink::fink(const fink& e) :reportsto(e.reportsto)
{

}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();     //call the parent method

	std::cout << "The Fink must report to " << reportsto << std::endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();     //call the parent method

	std::cout << "Please enter to whom the Fink reports to:" << std::endl;

	getline(std::cin, reportsto);
}

highfink::highfink() :manager(), fink()
{

}

highfink::highfink(const std::string& fn, const std::string ln,
	const std::string& j, const std::string rpo, int ico) :
	abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}

highfink::highfink(const abstr_emp& e, const std::string& rpo,
	int ico) :manager(e, ico), fink(e, rpo)
{

}



highfink::highfink(const fink& f, int ico) :
	fink(f), manager(f, ico)
{

}

highfink::highfink(const manager& m, const std::string& rpo) :
	manager(m), fink(m, rpo)
{

}

highfink::highfink(const highfink& h) :
	manager(h), fink(h)
{

}

void highfink::ShowAll() const
{
	manager::ShowAll();
	fink::ShowAll();
}

void highfink::SetAll()
{
	manager::SetAll();

	fink::SetAll();
}