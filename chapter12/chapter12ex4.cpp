#include "chapter12ex4.h"
#include <iostream>

Stack::Stack(int n)
{
	size = n;
	pitems = new Item[size];
	top = -1;
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	pitems = new Item[size];

	top = st.top;

	//copy the st.pitems to pitems
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}
}

Stack::~Stack()
{
	delete[] pitems;        //be careful! this should be matched with the constructor new/delete new[]/delete[]
	top = -1;
	size = 0;
}

bool Stack::isempty() const
{
	return top == -1;
}

bool Stack::isfull() const
{
	return top == size - 1;
}

//push() returns false if stack already is full, true otherwise
bool Stack::push(const Item& item)      //add item to stack
{
	pitems[top + 1] = item;
	std::cout << item << " is pushed.";
	top++;
	return !(top == MAX - 1);
}

//pop() returns false if stack already is empty, true otherwise
bool Stack::pop(Item& item)            //pop top into item
{
	item = pitems[top];
	std::cout << item << " is popped.";
	top--;
	return !(top == -1);
}

Stack& Stack::operator=(const Stack& st)
{

	if (this == &st)
		return *this;

	delete[] pitems;

	size = st.size;
	pitems = new Item[size];

	top = st.top;

	//copy the st.pitems to pitems
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}

	return *this;
}