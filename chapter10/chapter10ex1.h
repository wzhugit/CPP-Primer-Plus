//C++ Primer Plus chapter10ex1.h
#include <string>
#include <iostream>
using namespace std;
#ifndef ACCOUNT_
#define ACCOUNT_

class BankAccount
{
	private:
		string m_name;      //储户姓名
		string m_Account;   //账号
		double m_deposit;   //存款数目

	public:
		BankAccount();    //默认构造函数
		BankAccount(const string & name, const string & Account, double deposit = 0.0);     //构造函数

		void showdata() const;   //成员函数，用以显示储户姓名，账号和存款

		void putintoaccount(double deposit);      //存入参数deposit指定的数目

		void withdraw(double deposit);     //取出参数deposit指定的数目


		~BankAccount();        //析构函数

};


#endif

