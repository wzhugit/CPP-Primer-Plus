#include "chapter12ex4.h"
#include <iostream>

int main()
{
	{
		using namespace std;

		Stack stack1(5);     //create a Stack with 5 items

		Stack stack2(5);

		Item item1 = 1000;
		Item item2 = 20000;
		Item item3 = 300000;
		Item item4 = 4000000;
		Item item5 = 50000000;

		Item items[5] = { item1,item2,item3,item4,item5 };

		//push data
		for (int index = 0; index < 5; index++)
		{
			//if not full, push data
			if (!stack1.isfull())
			{
				stack1.push(items[index]);
				//cout << items[index] << " is pushed." << endl;
			}
		}

		stack2 = stack1;   //= operator

		//pop data
		Item getitem;

		int i = 4;
		while (i >= 0)
		{
			if (!stack1.isempty())
			{
				stack1.pop(getitem);

				//cout << getitem << " is popped." << endl;

				i--;
			}

		}

		while (i >= 0)
		{
			if (!stack2.isempty())
			{
				stack2.pop(getitem);

				cout << getitem << " is popped." << endl;

				i--;
			}

		}
	}

	return 0;

}
