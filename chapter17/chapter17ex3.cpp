//C++ Primer Plus chapter17ex3.cpp
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

int main()
{
	using namespace std;

	string fromfilename;

	fstream fromfile;

	string tofilename;

	fstream tofile;

	ostringstream stringstream;

	string contents;

	cout << "Please enter the existing filename to copy from: " << endl;

	cin >> fromfilename;

	fromfile.open("E:\\C++编程练习\\" + fromfilename);

	cout << "Please enter the filename to copy to: " << endl;

	cin >> tofilename;

	tofile.open("E:\\C++编程练习\\" + tofilename);


	while (getline(fromfile, contents))
		stringstream << contents << '\n';   //getline() will discard the '\n' that arouses getline(), 
	//so add '\n' to stringstream

	tofile << stringstream.str() << endl;

	fromfile.close();
	tofile.close();

	return 0;

}