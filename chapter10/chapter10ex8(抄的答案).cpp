//C++ Prier Plus chapter10ex8.h
//列表类List的类定义
#include <iostream>
#include "chapter10ex8.h"

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == MAX;
}

void List::show() const
{
	if (top == 0)
	{
		std::cout << "List is empty.\n";
	}
	else
	{
		std::cout << "List have " << top << " items:\n";
		for (int i = 0; i < top; i++)
		{
			std::cout << "#" << i + 1 << ":\tName: " << students[i].fullname << "\tAge: " << students[i].age << "\tID: " << students[i].ID << std::endl;
		}
	}
}

void List::add_data(const Item& item)
{
	if (top < MAX)
	{
		strcpy_s(students[top].fullname, item.fullname);
		students[top].age = item.age;
		students[top].ID = item.ID;
		top++;
		if (top == MAX)
		{
			std::cout << "List already full now.\n";
		}
	}
	else
	{
		std::cout << "List already full.\n";
	}
}

void List::del_data()
{
	if (top > 0)
	{
		--top;
		strcpy_s(students[top].fullname, "\0");
		students[top].age = 0;
		students[top].ID = 0;
	}
	else
	{
		std::cout << "List is empty.\n";
	}
}

void List::visit(void (*pf) (Item& item))
{
	for (int i = 0; i < top; i++)
	{
		pf(students[i]);
	}
}

void ageplus(Item& item)
{
	item.age += 1;
}

void IDplus(Item& item)
{
	item.ID += 100000;
}

void showmenu()
{
	using std::cout;

	cout << "Enter your choice:\n"
		"a) add data \t d) delete data \n"
		"p) age update \t i) ID update \n"
		"s) show data \t q) quit \n"
		"your choice is: ";
}
