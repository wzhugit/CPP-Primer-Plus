//C++ Primer Plus chapter14ex3.h
//chatper14_3_queuetp.h

#ifndef LEARN_CPP_CHAPTER14_3_QUEUETP_H
#define LEARN_CPP_CHAPTER14_3_QUEUETP_H

#include <string>

class Worker {
private:
	std::string fullname;
	long id;
public:
	Worker();
	Worker(const std::string& s, long n);
	~Worker();
	Worker& operator=(const Worker& w);
	void show() const;
};

template <typename Type>
class QueueTp {
private:
	enum { MAX = 100 };
	Type items[MAX];
	int front;
	int rear;
public:
	QueueTp();
	~QueueTp();
	bool isEmpty();
	bool isFull();
	bool enQueue(const Type& t);
	bool deQueue(Type& t);
	int num() const { return (rear - front + MAX) % MAX; }
};

template<typename Type>
QueueTp<Type>::QueueTp() {
	front = rear = 0;
}

template<typename Type>
QueueTp<Type>::~QueueTp() {

}

template<typename Type>
bool QueueTp<Type>::isEmpty() {
	if (front == rear && front == 0)
		return true;
	return false;
}

template<typename Type>
bool QueueTp<Type>::isFull() {
	if ((rear + 1) % MAX == front)
		return true;
	return false;
}

template<typename Type>
bool QueueTp<Type>::enQueue(const Type& t) {
	if (isFull())
		return false;
	items[rear] = t;
	rear = (rear + 1) % MAX;
	return true;
}

template<typename Type>
bool QueueTp<Type>::deQueue(Type& t) {
	if (isEmpty())
		return false;
	t = items[front];
	front = (front + 1) % MAX;
	return true;
}

#endif //LEARN_CPP_CHAPTER14_3_QUEUETP_H



