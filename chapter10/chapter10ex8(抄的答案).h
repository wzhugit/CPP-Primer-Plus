//C++ Prier Plus chapter10ex8.h
//列表类List的类声明
#ifndef LIST_H_
#define LIST_H_

struct Student
{
	char fullname[25];
	int age;
	int ID;
};

typedef Student Item;

class List
{
private:
	enum { MAX = 3 };
	Student students[MAX];
	int top;

public:
	List();
	~List() {};
	bool isempty() const;
	bool isfull() const;
	void visit(void (*pf) (Item& item));
	void show() const;
	void add_data(const Item& item);
	void del_data();
};

void ageplus(Item& item);
void IDplus(Item& item);
void showmenu();

#endif // !LIST_H_
