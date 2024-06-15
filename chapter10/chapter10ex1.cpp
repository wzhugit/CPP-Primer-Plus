#include "chapter10ex1.h"

BankAccount::BankAccount()      //Ĭ�Ϲ��캯��
{
	m_name = "default name";
	m_Account = "0";        //�������¹��캯��������ͻ
	m_deposit = 0.0;
}

BankAccount::BankAccount(const string& name, const string & Account, double deposit)      //���캯��
{
	m_name = name;
	m_Account = Account;
	m_deposit = deposit;
}

void BankAccount::showdata() const       //��Ա������������ʾ�����������˺źʹ��
{
	using namespace std;
	cout << "The Name of the account holder is " << m_name << endl;
	cout << "The Account of " << m_name << " is " << m_Account << endl;
	cout << "The deposit the account holder " << m_name << " has is " << m_deposit << endl;
}

void BankAccount::putintoaccount(double deposit)     //�������depositָ������Ŀ
{
	m_deposit += deposit;
}

void BankAccount::withdraw(double deposit)         //ȡ������depositָ������Ŀ
{
	m_deposit -= deposit;
}

BankAccount::~BankAccount()           //��������
{
	cout << "Bye." << endl;
}