// C++ Primer Plus example list 17.16
//fileio.cpp -- saving to a file
#include <iostream>      //not needed for many systems
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string filename;

	cout << "Enter name for new file: ";
	cin >> filename;

	//create output stream object for new file and call it fout
	ofstream fout(("E:\\C++编程练习\\" + filename));

	fout << "For your eyes only!\n";     //write to a file
	cout << "Enter your secret number: ";     //write to screen
	float secret;
	cin >> secret;
	fout << "Your secret number is " << secret << endl;
	fout.close();     //close file

	//create input stream object for new file and call it fin
	ifstream fin(filename);
	cout << "Here are the contents of " << filename << ":\n";
	char ch;

	while (fin.get(ch))       //read character from file and write it to screen
		cout << ch;

	cout << "Done\n";

	fin.close();

	return 0;

}