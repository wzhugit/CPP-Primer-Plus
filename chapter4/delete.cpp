//delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);//函数原型
int main()
{
	char * name;
	name = getname();
	cout<<name<<" at "<<(int *)name<<"\n";
	delete [] name;//删除name指针指向的内容

	name = getname();//重新使用先前清空的内存
	cout<<name<<" at "<<(int *)name<<"\n";//将指针赋给cout，将显示该指针所指示的内容
	delete [] name;
	cin.get();
	return 0;
}

char * getname()      //返回指向新字符串的指针,char *表明返回类型为char型的指针
{
	char temp[90];
	cout<<"Enter last name:";
	cin>>temp;
	char * pn = new char[strlen(temp)+1];
	strcpy(pn,temp);

	return pn;
}
