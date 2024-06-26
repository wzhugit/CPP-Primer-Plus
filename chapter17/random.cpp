// C++ Primer Plus example list 17.20
//random.cpp -- random access to a binary file
#include <iostream>    //not required by most systems
#include <fstream>
#include <iomanip>
#include <cstdlib>    //for exit()

const int LIM = 20;

struct planet
{
	char name[LIM];     //name of planet
	double population;    //its population
	double g;       //its acceleration of grvity
};

const char* file = "E:\\C++编程练习\\planet.dat";    //ASSUMED TO EXIST (binary.cpp example)
inline void eatline()
{
	while (std::cin.get() != '\n')
		continue;
}

int main()
{
	using namespace std;
	planet p1;
	cout << fixed;

	//show initial contents
	fstream finout;    //read and write streams
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);

	//NOTE: Some Unix systems require omitting | ios::binary
	int ct = 0;

	if (finout.is_open())
	{
		finout.seekg(0);     //go to beginning
		cout << "Here are the current contents of the "
			<< file << " file:\n";

		while (finout.read((char*)&p1, sizeof p1))
		{
			cout << ct++ << ": " << setw(LIM) << p1.name << ": "
				<< setprecision(0) << setw(12) << p1.population
				<< setprecision(2) << setw(6) << p1.g << endl;
		}

		if (finout.eof())
			finout.clear();    //clear eof flag
		else
		{
			cerr << "Error in reading " << file << ".\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << " could not be opened --- bye.\n";
		exit(EXIT_FAILURE);
	}

	//change a record
	cout << "Enter the record number you wish to change: ";
	long rec;
	cin >> rec;
	eatline();        //get rid of newline

	if (rec < 0 || rec >= ct)
	{
		cerr << "Invalid record number -- bye\n";
		exit(EXIT_FAILURE);
	}

	std::streampos place = rec * sizeof p1;    //convert to streampos type
	finout.seekg(place);     //random access

	if (finout.fail())
	{
		cerr << "Error on attempted seek\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char*)&p1, sizeof p1);
	cout << "Your selection:\n";
	cout << rec << ": " << setw(LIM) << p1.name << ": "
		<< setprecision(0) << setw(12) << p1.population
		<< setprecision(2) << setw(6) << p1.g << endl;

	if (finout.eof())
		finout.clear();       //clear eof flag

	cout << "Enter planet name: ";
	cin.get(p1.name, LIM);
	eatline();
	cout << "Enter plantary population: ";
	cin >> p1.population;
	cout << "Enter planet's acceleration of grvity: ";
	cin >> p1.g;
	finout.seekp(place);     //go back
	finout.write((char*)&p1, sizeof p1) << flush;

	if (finout.fail())
	{
		cerr << "Enter on attempted write\n";
		exit(EXIT_FAILURE);
	}

	//show revised file
	ct = 0;
	finout.seekg(0);       //go to beginning of file
	cout << "Here are the new contents of the " << file
		<< " file:\n";

	while (finout.read((char*)&p1, sizeof p1))
	{
		cout << ct++ << ": " << setw(LIM) << p1.name << ": "
			<< setprecision(0) << setw(12) << p1.population
			<< setprecision(2) << setw(6) << p1.g << endl;
	}

	finout.close();
	cout << "Done.\n";
	return 0;
}
