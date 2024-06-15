// C++ Primer Plus chapter12ex3.h
// C++ Primer Plus example program list 10.7
//stock20.h -- augmented version
#include <string>         //for std::string

#ifndef STOCK20_H_
#define STOCK20_H_


class Stock
{
private:
	char* company = new char[20];         //dynamic allocate memory 动态分配的内存
	int shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares * share_val;
	}


public:
	Stock();            //default constructor
	Stock(const char* comp, long n = 0, double pr = 0.0);
	~Stock();          //do-nothing destructor
	void buy(long mum, double price);
	void sell(long num, double price);
	void update(double price);


	const Stock& topval(const Stock& s) const;

	friend std::ostream& operator<<(std::ostream& os, const Stock& stock);

};//�������������зֺ�

#endif