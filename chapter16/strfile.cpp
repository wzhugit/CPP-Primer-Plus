//C++ Primer Plus example list 16.2
//strfile.cpp -- read strings from a file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
	using namespace std;
	ifstream fin;
	fin.open("E:\\C++编程练习\\tobuy.txt");

	if (fin.is_open() == false)
	{
		cerr << "Can't open file. Bye.\n";
		exit(EXIT_FAILURE);     //exit() comes from C, reference to <C Primer Plus> P448
	}

	string item;
	int count = 0;
	getline(fin, item, ':');

	while (fin)           //while input is good
	{
		++count;
		cout << count << ": " << item << endl;
		getline(fin, item, ':');
	}

	cout << "Done\n";
	fin.close();
	return 0;
}