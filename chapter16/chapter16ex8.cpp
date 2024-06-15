// C++ Primer Plus chapter16ex8.cpp
#include <iostream>
#include <set>
#include <string>
#include <algorithm>

int main()
{
	//the number of Mat's friends
	int num_of_MatsFriend;

	//the number of Pat's friends
	int num_of_PatsFriend;

	//store the temporory data
	std::string tempname;

	std::set<std::string> MatsFriendSet;
	std::set<std::string> PatsFriendSet;

	std::cout << "Mat, Enter the Number of your FRIENDS:" << std::endl;
	std::cin >> num_of_MatsFriend;

	std::cin.get();

	for (int numMat = 0; numMat < num_of_MatsFriend; numMat++)
	{
		std::cout << "Mat, now Enter the Name of your FRIENDS:" << std::endl;

		getline(std::cin, tempname);

		//insert name
		MatsFriendSet.emplace(tempname);

	}

	std::cout << "Here are Mats Friend:" << std::endl;

	for (std::string name : MatsFriendSet)
		std::cout << name << ", ";

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Pat, Enter the Number of your FRIENDS:" << std::endl;
	std::cin >> num_of_PatsFriend;
	std::cin.get();


	for (int numPat = 0; numPat < num_of_PatsFriend; numPat++)
	{
		std::cout << "Pat, now Enter the Name of your FRIENDS:" << std::endl;

		getline(std::cin, tempname);

		//insert name
		PatsFriendSet.emplace(tempname);

	}

	std::cout << "\n\nHere are Pats Friend:" << std::endl;

	for (std::string name : PatsFriendSet)
		std::cout << name << ", ";

	std::cout << std::endl;



	std::set<std::string> NotCommoninSets;
	std::set<std::string> Union;
	std::set<std::string> Intesect;

	
	std::set_union(MatsFriendSet.cbegin(), MatsFriendSet.cend(),
		PatsFriendSet.cbegin(), PatsFriendSet.cend(), std::inserter(Union,Union.begin()));//并集

	std::set_intersection(MatsFriendSet.cbegin(), MatsFriendSet.cend(),
		PatsFriendSet.cbegin(), PatsFriendSet.cend(), std::inserter(Intesect, Intesect.begin()));//交集
	
	std::cout << "\n\nHere are all the Union Part: " << std::endl;

	for (std::string name : Union)
		std::cout << name << ", ";

	std::cout << "\n\nHere are all the InterSection Part: " << std::endl;

	for (std::string name : Intesect)
		std::cout << name << ", ";

	


	std::set<std::string> OnlyinMat;

	std::set_difference(MatsFriendSet.cbegin(), MatsFriendSet.cend(), Intesect.cbegin(), Intesect.cend(), std::inserter(OnlyinMat, OnlyinMat.begin()));

	std::set<std::string> OnlyinPat;

	std::set_difference(PatsFriendSet.cbegin(), PatsFriendSet.cend(), Intesect.cbegin(), Intesect.cend(), std::inserter(OnlyinPat, OnlyinPat.begin()));

	std::set<std::string> AllDifferent;

	std::set_union(OnlyinMat.cbegin(), OnlyinMat.cend(), OnlyinPat.cbegin(), OnlyinPat.cend(), std::inserter(AllDifferent, AllDifferent.begin()));

	std::cout << "\nHere are all the Different Part: " << std::endl;

	for (std::string name : AllDifferent)
		std::cout << name << ", ";

	std::cout << std::endl;
	

	return 0;

}
