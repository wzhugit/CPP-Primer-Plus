//C++ Primer Plus 编程练习
//chapter8ex1.cpp

#include <iostream>
int main()
{
	using namespace std;
	void print(const char *str, int times = 1);

	char * string1 = "Bye Moto";
	char * string2 = "Hello Apple";

	print(string1);
	print(string2,3);
}

void print(const char *str, int times)
{
	if (times != 0)
		for (int i = 0; i < times; i++)
		{
			std::cout << str << std::endl;
		}

	
}