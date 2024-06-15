//C++ Prier Plus chapter10ex5.cpp
//stack.cpp -- Stack member function
#include "chapter10ex5.h"
Stack::Stack()   //create an empty stack, top indicates the number ot the items the stack holds currently
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}

	else
		return false;
}