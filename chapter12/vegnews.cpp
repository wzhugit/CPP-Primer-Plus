//C++ Primer Plus example list 12.3
//vegnews.cpp -- using new and delete with classes
//compile with strngbad.cpp

#include <iostream>
using std::cout;
#include "strngbad.h"

void callme1(StringBad&);     //pass by reference
void callme2(StringBad);      //pass by value

int main()
{
	using std::endl;
	{
		cout << "Starting an inner block:\n";
		StringBad headline1("Celery Stalks at Midnight");
		StringBad headline2("Letter Prey");
		StringBad sports("Spinach Leaves Bowl for Dollars");
		cout << "headline1:" << headline1 << endl;
		cout << "headline2:" << headline2 << endl;
		cout << "sports:" << sports << endl;
		callme1(headline1);
		cout << "headline1:" << headline1 << endl;
		callme2(headline2);
		cout << "headline2:" << headline2 << endl;
		cout << "Initialize one object to another:\n";
		StringBad sailor = sports;       //本语句调用拷贝构造函数，
		//编译器提供的合成的拷贝构造函数会将其参数的成员逐个拷贝到正在创建的对象中。编译器从给定对象中依次将每个非static成员拷贝到正在创建的对象中
		cout << "sailor:" << sailor << endl;
		cout << "Assign one object to another:\n";
		StringBad knot;
		knot = headline1;        //此处是拷贝赋值运算符，返回指向其左侧对象的引用。knot和headline指向的是同一个对象，当headline1销毁时会调用析构函数，
		//而knot销毁时也将调用析构函数，但此时knot指向的内容为空，从而引发问题
		cout << "knot:" << knot << endl;
		cout << "Exitting the block.\n";
	}
	cout << "End of main()\n";

	return 0;
}

void callme1(StringBad& rsb)     //pass by reference
{
	cout << "String passed by reference:\n";
	cout << "    \"" << rsb << "\"n";
}

void callme2(StringBad sb)
{
	cout << "String passed by value:\n";
	cout << "    \"" << sb << "\"\n";
}