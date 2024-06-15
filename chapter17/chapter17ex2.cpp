//C++ Primer Plus chapter17ex2.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
	using namespace std;
	string filename;
	ofstream file;
	ostringstream out;

	int ch;

	cout << "Please enter the filename which you want to create:" << endl;

	getline(cin, filename);

	file.open("E:\\C++编程练习\\" + filename, std::ios_base::out);

	cout << "Please enter the file contents:" << endl;

	while ((ch = cin.get()) && (ch != EOF))
	{
		out << char(ch);
	}

	file << out.str();

	file.close();

	return 0;
}

