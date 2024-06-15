#include "chapter10ex5.h"
#include <iostream>
int main()
{
	double total = 0;          //The total sum of the payments of the customer items deleted

	Item customer1 = {"Jack Zhu",200};

	Item customer2 = { "Sherry Sun",150 };

	Item customer3 = { "Rose Lee",50 };

	Stack stack = Stack();      //use default constructor

	stack.push(customer1);       //push into the stack

	stack.push(customer2);

	stack.push(customer3);

	stack.pop(customer1);        //pop from the stack
	total += customer1.payment;     //add the payment of the item on the top of the stack to the total, then pop the top item 

	stack.pop(customer2);        //pop from the stack
	total += customer2.payment;      //add the payment of the item on the top of the stack to the total, then pop the top item

	stack.pop(customer3);        //pop from the stack
	total += customer3.payment;      //add the payment of the item on the top of the stack to the total, then pop the top item


	std::cout << "The total payment is " << total << std::endl;

	return 0;
	
}

