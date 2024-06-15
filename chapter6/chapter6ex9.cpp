//chapter6ex9.cpp
#include <iostream>  
#include <fstream>  
#include <string>  
using namespace std;
struct people {
	string name;
	double money;
	int flag;
};
int main()
{
	ifstream infile;
	infile.open("E:\\C++编程练习\\donators.txt");       //必须使用完整路径
	int num, GP = 0;
	infile >> num;
	infile.get();
	people *p = new people[num];
	for (int i = 0; i < num; ++i) {
		getline(infile, (p + i)->name);
		infile >> (p + i)->money;
		infile.get();
		if ((p + i)->money > 10000) {
			(p + i)->flag = 1;
			++GP;
		}
		else
			(p + i)->flag = 0;
	}
	cout << "Patrons: ";
	for (int i = 0; i < num; ++i) {
		if ((p + i)->flag)
			cout << (p + i)->name << " ";
	}
	cout << endl;
	cout << "Others: ";
	if (GP == num)
		cout << "none" << endl;
	else {
		for (int i = 0; i < num; ++i) {
			if (!((p + i)->flag))
				cout << (p + i)->name << " ";
		}
	}
	cout << endl;
	return 0;
}