// C++ Primer Plus chapter16ex7.cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> Lotto(int numofroundonlotto, unsigned int randroundnum);

	int testnum;

	std::cout << "How many times you want to test?" << std::endl;

	std::cin >> testnum;

	//打印vector的值
	void printvector(std::vector<int> vec);

	std::vector<int> winners;

	int i = 0;

	while (i < testnum)
	{
		winners = Lotto(51, 6);

		std::cout << "The Winner owns the following numbers:" << std::endl;

		printvector(winners);

		i++;
	}
}

//numofroundonlotto 彩票卡上圆点的个数，
//randroundnum 随机选择的圆点个数，
//返回包含（按排列后的顺序1-numofroundonlotto间，共randroundnum个元素的）随机选择的号码
std::vector<int> Lotto(int numofroundonlotto, unsigned int randroundnum)
{
	std::vector<int> randlist;

	std::vector<int> allpossiblelist;

	if (numofroundonlotto <= 0)
		std::cout << "The number must be a positive integer." << std::endl;

	else
	{
		for (int i = 1; i <= 51; i++)
			allpossiblelist.push_back(i);


		for (int i = 0; i < randroundnum; i++)
		{
			std::random_shuffle(allpossiblelist.begin(), allpossiblelist.end()); //打乱序列vector

			randlist.push_back(*allpossiblelist.begin());   //取乱序序列中的第一个值
		}
	}

	return randlist;
}

//打印vector的值
void printvector(std::vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ';

	std::cout << std::endl;
}
