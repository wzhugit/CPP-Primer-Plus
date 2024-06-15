//C++ Primer Plus example list 12.10
//queue.h -- interface for a queue
#ifndef QUEUE_H_
#define QUEUE_H_

//This queue will contain Customer items
class Customer
{
private:
	long arrive;           //arrival time for customer
	int processtime;       //processing time for customer

public:
	Customer()
	{
		arrive = processtime = 0;
	}

	void set(long when);

	long when() const
	{
		return arrive;
	}

	int ptime() const
	{
		return processtime;
	}
};

typedef Customer Item;

class Queue
{
private:
	//class scope definitions
	//Node is a nested structure definition local to this class
	struct Node
	{
		Item item;
		struct Node* next;
	};

	enum { Q_SIZE = 10 };

	//private class members
	Node* front;      //pointer to front of Queue
	Node* rear;       //pointer to rear of Queue
	int items;           //current number of items in Queue
	const int qsize;     //maximum number of items in Queue

	//preemptive definitions to prevent public copying
	Queue(const Queue& q) :qsize(0)             //构造函数初始值列表，冒号后的是要初始化的成员列表及初始值，
		//成员初始化的顺序与它们在类定义中出现的顺序一致，而与初始值列表顺序无关
		//构造函数体一开始执行，初始化就完成了，故必须在构造函数执行前初始化引用成员和const成员
		//而非const成员，非引用成员可以在构造函数体中进行初始化
	{

	}

	Queue& operator=(const Queue& q)
	{
		return *this;
	}

public:
	Queue(int qs = Q_SIZE);      //create queue with a limit
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item& item);    //add item to end
	bool dequeue(Item& item);          //remove item from front
};

#endif // !QUEUE_H_
