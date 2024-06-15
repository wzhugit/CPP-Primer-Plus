// C++ Primer Plus example program list 10.7
//stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares * share_val;
	}


public:
	Stock();            //default constructor
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock();          //do-nothing destructor
	void buy(long mum, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock& topval(const Stock& s) const;

	std::string companyname() const;//return the company name
	int ownedshares() const;  //return the shares
	double shareval() const;   //return the share value
	double totalval() const;   //return the total value

};//定义类后面必须有分号

#endif