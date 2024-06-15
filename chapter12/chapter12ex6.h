#include <iostream>

class Customer
{
public:
	Customer() { arrive = processtime = 0; }
	void set(long when) {
		processtime = std::rand() % 3 + 1;
		arrive = when;
	}
	long when()const { return arrive; }
	int ptime()const { return processtime; }
private:
	long arrive;
	int processtime;
};
typedef Customer Item;




class Queue
{
	struct Node
	{
		Item item;
		struct  Node* next;
	};
	enum { Q_SIZE = 10 };
	Queue(const Queue& q) :qsize(0) {}
Queue& operator=(const Queue& q) { return *this; } public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isfull();
	bool isempty();
	int queuecount()const;
	bool enqueue(const Item& item);
	bool DeleteFirstFromQueue(Item& item);
private:
	Node* front;
	Node* rear;
	int items;
	const int qsize;
};