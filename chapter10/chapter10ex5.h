//C++ Prier Plus chapter10ex5.h
//SALES命名空间和类声明
#ifndef CUSTOMER_
#define CUSTOMER_
struct customer
{
	char fullname[35];
	double payment;
};


typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };    //constant specific to class, MAX only accessible in Stack
	Item items[MAX];    //holds stack item
	int top;            //index for top stack item

public:
	Stack();            //default constructor
	bool isempty() const;
	bool isfull() const;

	//push() returns false if stack already is full, true otherwise
	bool push(const Item& item);    //add item to stack

	//pop() returns false if stack already is empty, true otherwise
	bool pop(Item& item);          //pop top into item

};



#endif
