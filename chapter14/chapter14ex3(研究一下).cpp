// chapter14_3_queuetp.cpp

#include "chapter14ex3.h"
#include <iostream>

Worker::Worker() : fullname("none")
{
	id = 0;
}

Worker::Worker(const std::string& s, long n)
	: fullname(s)
{
	id = n;
}

Worker::~Worker()
{

}

Worker& Worker::operator=(const Worker& w)
{
	fullname = w.fullname;
	id = w.id;
	return *this;
}

void Worker::show() const
{
	using namespace std;
	cout << "name: " << fullname << endl;
	cout << "id: " << id << endl;
}



