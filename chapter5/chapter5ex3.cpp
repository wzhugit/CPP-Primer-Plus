#include <iostream>
int main()
{
	double x;
	double sum{0};
	std::cout << "输入一个数字：" << std::endl;
	std::cin>>x;
	while (x != 0)
	{
		std::cout << "累计和为" << sum + x;
		sum += x;
		std::cout << "请输入下一个数字：" << std::endl;
		std::cin >> x;
	}
	std::cin.get(); 
	return 0;
}