//C++ Primer Plus example program list 10.6
//usestock1.cpp -- using the Stock class
//compile with stock10.cpp
#include <iostream>
#include "stock10.h"

int main()                         //main()�Ŀ�ͷ��ĩβ����һ�������š�����stock1��stock2���Զ��������ڳ����˳��䶨�����������ʱ��ʧ��
//��û����Щ�����ţ�����齫Ϊ����main()����˽���main()ִ����Ϻ󣬲Ż�����������������ڻ����У�����ζ�Ž�������������������ǰ�رգ�
//�������޷��������������Ϣ���������Щ�����ź�������������������ý��ڵ��ﷵ�����ǰִ�У��Ӷ���ʾ��Ӧ����Ϣ
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