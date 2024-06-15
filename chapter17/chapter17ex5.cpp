//C++ Primer Plus chapter17ex5.cpp
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	using namespace std;

	vector<string> MatFriendvec;
	vector<string> PatFriendvec;

	vector<string> CommonFriendvec;
	vector<string> UnionFriendvec;
	vector<string> DiffFriendvec;

	ifstream MatFriendfile("E:\\C++编程练习\\chapter17ex5MatsFriends.dat");

	ifstream PatFriendfile("E:\\C++编程练习\\chapter17ex5PatsFriends.dat");

	ofstream ResultFriendFile("E:\\C++编程练习\\chapter17ex5Res.dat");

	string tempname;

	while (getline(MatFriendfile, tempname))
		MatFriendvec.push_back(tempname);

	while (getline(PatFriendfile, tempname))
		PatFriendvec.push_back(tempname);

	MatFriendfile.close();
	PatFriendfile.close();

	cout << "The Name List stored in MatsFriends.dat is :" << endl;

	for (auto elem : MatFriendvec)
		cout << elem << endl;

	cout << endl;

	cout << "The Name List stored in PatsFriends.dat is :" << endl;

	for (auto elem : PatFriendvec)
		cout << elem << endl;

	sort(MatFriendvec.begin(), MatFriendvec.end());
	sort(PatFriendvec.begin(), PatFriendvec.end());

	//get common elements with set_intersection()

	set_intersection(MatFriendvec.begin(), MatFriendvec.end(),
		PatFriendvec.begin(), PatFriendvec.end(), std::inserter(CommonFriendvec, CommonFriendvec.begin()));

	cout << "\n\nCommon elements are : " << endl;

	for (auto elem : CommonFriendvec)
		cout << elem << endl;


	set_union(MatFriendvec.cbegin(), MatFriendvec.cend(),
		PatFriendvec.cbegin(), PatFriendvec.cend(), std::inserter(UnionFriendvec, UnionFriendvec.begin()));

	cout << "\n\nUnion elements are : " << endl;

	for (auto elem : UnionFriendvec)
		cout << elem << endl;

	set_difference(UnionFriendvec.cbegin(), UnionFriendvec.cend(),
		CommonFriendvec.cbegin(), CommonFriendvec.cend(), std::inserter(DiffFriendvec, DiffFriendvec.begin()));

	for (auto elem : UnionFriendvec)
		ResultFriendFile << elem << endl;


	ResultFriendFile.close();

	return 0;


}