//C++ Primer Plus chapter12ex5.cpp
//queue.cpp -- Queue and Customer methods
#include "chapter12ex5.h"

Queue::~Queue()
{
	Node* temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
Queue::Queue(int qs) :qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}
bool Queue::isfull() { return items == qsize; }
bool Queue::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

bool Queue::DeleteFirstFromQueue(Item& item) {
	if (front == nullptr)
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}
bool Queue::isempty()
{
	return items == 0;
}

int Queue::queuecount()const
{
	return items;
}