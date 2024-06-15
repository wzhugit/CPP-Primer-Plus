#include "chapter10ex1.h"
#include <iostream>
#include <string>
int main()
{
	{

		using namespace std;

		using std::string;

		string name;

		string accountnumber;

		double deposit;

		cout << "Please enter the NAME of the ACCOUNT HOLDER:" << endl;


		cin >> name;

		cin.get();

		cout << "Please enter the ACCOUNT NUMBER of the ACCOUNT HOLDER:" << endl;

		getline(cin,accountnumber);


		cout << "Please enter the DEPOSIT of the ACCOUNT HOLDER:" << endl;

		cin >> deposit;

		BankAccount bankaccount1 = BankAccount(name, accountnumber, deposit);    //调用构造函数


		//调用成员函数
		bankaccount1.showdata();

		bankaccount1.putintoaccount(100);  //往账号内存入100

		bankaccount1.showdata();    //显示数据

		bankaccount1.withdraw(50);  //从账号内取出50

		bankaccount1.showdata();    //显示数据

	}      //调用析构函数
	
	return 0;
}