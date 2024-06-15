//C++ Primer Plus chapter17ex4.cpp

//在运行前至少要创建两个输入文件，并写入数据，
//且文件要创建在在项目文件目录中，
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
int main()
{
	using namespace std;
	ifstream in1("E:\\C++编程练习\\chapter17ex4file1.txt");
	if (!in1.is_open())
	{
		cerr << "inputfile1 could not open.\n";
		exit(EXIT_FAILURE);
	}
	ifstream in2("E:\\C++编程练习\\chapter17ex4file2.txt");
	if (!in2.is_open())
	{
		cerr << "inputfile2 could not open.\n";
		exit(EXIT_FAILURE);
	}
	ofstream out("E:\\C++编程练习\\chapter17ex4fileresult.txt");
	if (!out.is_open())
	{
		cerr << "result file could not open.\n";
		exit(EXIT_FAILURE);
	}
	string temp;
	char ch;
	while ((ch = in1.peek()) != EOF)
	{
		getline(in1, temp);
		out << temp << ' ';
		if ((ch = in2.peek()) != EOF)
		{
			getline(in2, temp);
			out << temp << endl;
		}
	}
	cout << "done\n";
	return 0;
}