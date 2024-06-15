//C++ Primer Plus chapter14ex3use.cpp

#include <iostream>
#include <cstring>
#include "chapter14ex3.h"
//#include "chapter14ex3.cpp"


// run

int main()
{
	using namespace std;
	Worker* lolas[5];
	Worker* t;
	for (int i = 0; i < 5; ++i)
		lolas[i] = new Worker("worker" + i, i);
	QueueTp<Worker*> q;
	q.enQueue(lolas[0]);
	q.enQueue(lolas[1]);
	q.enQueue(lolas[2]);
	cout << q.num() << "items in q" << endl;
	q.enQueue(lolas[3]);
	q.enQueue(lolas[4]);
	cout << q.num() << "items in q" << endl;
	q.deQueue(t);
	cout << q.num() << "items in q" << endl;
}
