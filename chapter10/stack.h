//C++ Primer Plus example program list 10.10
//stack.h -- class deinition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10};    //constant specific to class
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
#endif // !STACK_H_

