//chapter6ex8.cpp
#include <fstream>//文件读写头文件
#include <iostream>
int main()
{
	using namespace std;
	ifstream fi;                                   //创建一个文件输入对象
	char ch;
	int numofchar = 0;
	fi.open("C:\\Users\\Jack\\Desktop\\file.txt");  //读取包含路径的文件名
	while (fi >> ch)
	{
		numofchar++;

	}
	fi.close();
	cout << "There are " << numofchar << " characters\n";

	return 0;



}