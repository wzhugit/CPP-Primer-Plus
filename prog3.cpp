#include <iostream>
int main()
{
	int carrots;

	std::cout<<"How many carrots do you have?"<<std::endl;
	std::cin>>carrots;
	std::cout<<" Here are two more.";
	carrots=carrots+2;

	std::cout<<"Now you have "<<carrots<<" carrots."<<std::endl;

	std::cin.get();

	return 0;
	
}
