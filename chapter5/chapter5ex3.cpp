#include <iostream>
int main()
{
	double x;
	double sum{0};
	std::cout << "����һ�����֣�" << std::endl;
	std::cin>>x;
	while (x != 0)
	{
		std::cout << "�ۼƺ�Ϊ" << sum + x;
		sum += x;
		std::cout << "��������һ�����֣�" << std::endl;
		std::cin >> x;
	}
	std::cin.get(); 
	return 0;
}