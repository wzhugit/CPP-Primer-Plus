//C++ Primer Plus example program list 10.6
//usestock1.cpp -- using the Stock class
//compile with stock10.cpp
#include <iostream>
#include "stock10.h"

int main()                         //main()的开头和末尾多了一个大括号。诸如stock1和stock2等自动变量将在程序退出其定义所属代码块时消失。
//若没有这些大括号，代码块将为整个main()，因此仅当main()执行完毕后，才会调用析构函数。窗口环境中，这意味着将在两个析构函数调用前关闭，
//导致你无法看到最后两条消息。但添加这些大括号后，最后两个析构函数调用将在到达返回语句前执行，从而显示相应的消息
{
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);              //constructor usage syntax 1
		stock1.show();
		Stock stock2 = Stock("Boffo objects", 2, 2.0);    //constructor usage syntax 2
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listening stock1 and stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);          //temp object
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}
	return 0;
}