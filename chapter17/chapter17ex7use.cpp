#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "chapter17ex7.h"

int main()
{
	using namespace std;
	vector<string> vostr;
	vector<string> vistr;

	string temp;

	void ShowStr(string & s);
	void GetStrs(istream & is, vector<string> vecofstr);

	//acquire strings
	cout << "Enter strings (empty line to quit):\n";

	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);

	cout << "Here is your input.\n";

	for_each(vostr.begin(), vostr.end(), ShowStr);

	//store in a file
	ofstream fout("E:\\C++±‡≥Ã¡∑œ∞\\chapter17ex7file.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	//recover file contents
	vector<string> contents;
	ifstream fin("E:\\C++±‡≥Ã¡∑œ∞\\chapter17ex7file.dat", ios_base::in | ios_base::binary);

	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}

	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;

}

void ShowStr(std::string& s)
{
	std::cout << s << std::endl;
}

void GetStrs(std::istream& is, std::vector<std::string> vecofstr)
{
	std::string tempstring;

	char* size = (char *)"0";

	std::string str_that_haveread;

	char* strhaveread;

	if (is.read(size, 10))
	{
		for (int i = 0; i < int(size); i++)
		{
			is.get(strhaveread, int(size));
			tempstring.append(strhaveread);
		}
		vecofstr.push_back(tempstring);
	}

	std::cout << "The File Contents are :" << std::endl;

	for (auto s : vecofstr)
		std::cout << s << std::endl;


}