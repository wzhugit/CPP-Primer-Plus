//C++ Primer Plus example 15.19
//constcast.cpp -- using the const_cast<>
#include <iostream>
using std::cout;
using std::endl;
void change(const int* pt, int n);

int main()
{
	int pop1 = 38383;
	const int pop2 = 2000;

	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
	change(&pop1, -103);
	change(&pop2, -103);
	cout << "pop1,pop2: " << pop1 << ", " << pop2 << endl;

	return 0;
}

void change(const int* pt, int n)
//functions with non-refence arguments 
//accept a copy of the input arguments.
//The const except the reference arguments 
//in function arguments list means that the 
//function won't revise the arguments passed in. 
//Such functions can accept const variables or non-const variables.
{
	int* pc;

	pc = const_cast<int*>(pt);
	*pc += n;
}