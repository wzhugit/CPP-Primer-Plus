//C++ Primer Plus example list 12.2
//stmgbad.cpp -- StringBad class methods
#include <cstring>
#include "strngbad.h"

using std::cout;


//initializing static class member
int StringBad::num_strings = 0;   //number of objects ,类的静态成员为该类所有对象所共享，
//由于头文件需要被include，若在头文件中初始化静态成员，则相当于在每个使用
//该头文件的.cpp文件中定义，造成重定义问题，故一般静态成员在实现文件cpp中被初始化                                       
//(The static  member of a class is shared by all the objects of the class)

//class methods
//constructor StringBad from C string
StringBad::StringBad(const char* s)
{
	len = std::strlen(s);         //set size
	str = new char[len + 1];      //allocate storage，由于此处没有将str初始化，其指向并不确定，导致使用strcpy函数会出错，此处结果与编译器相关
#pragma waring(suppress:4996) std::strcpy(str, s);          //initialize pointer
	num_strings++;                //set object count
	cout << num_strings << ":\"" << str
		<< "\" object created\n";    //For Your Information
}

StringBad::StringBad()             //defualt constructor
{
	len = 4;
#pragma waring(suppress:4996)
	str = new char[4];
#pragma waring(suppress:4996) std::strcpy(str, "C++");      //default string
	num_strings++;
	cout << num_strings << ":\"" << str << "\"default object created\n";  //FYI
}

StringBad::~StringBad()          //necessary destructor
{
	cout << "\"" << str << "\" object deleted.";            //FYI
	--num_strings;           //required
	cout << num_strings << " left\n";    //FYI
	delete[] str;           //required
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
}