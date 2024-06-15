#include "chapter10ex1.h"

BankAccount::BankAccount()      //默认构造函数
{
	m_name = "default name";
	m_Account = "0";        //避免以下构造函数命名冲突
	m_deposit = 0.0;
}

BankAccount::BankAccount(const string& name, const string & Account, double deposit)      //构造函数
{
	m_name = name;
	m_Account = Account;
	m_deposit = deposit;
}

void BankAccount::showdata() const       //成员函数，用以显示储户姓名，账号和存款
{
	using namespace std;
	cout << "The Name of the account holder is " << m_name << endl;
	cout << "The Account of " << m_name << " is " << m_Account << endl;
	cout << "The deposit the account holder " << m_name << " has is " << m_deposit << endl;
}

void BankAccount::putintoaccount(double deposit)     //存入参数deposit指定的数目
{
	m_deposit += deposit;
}

void BankAccount::withdraw(double deposit)         //取出参数deposit指定的数目
{
	m_deposit -= deposit;
}

BankAccount::~BankAccount()           //析构函数
{
	cout << "Bye." << endl;
}