//C++ Primer Plus chapter10ex1.h
#include <string>
#include <iostream>
using namespace std;
#ifndef ACCOUNT_
#define ACCOUNT_

class BankAccount
{
	private:
		string m_name;      //��������
		string m_Account;   //�˺�
		double m_deposit;   //�����Ŀ

	public:
		BankAccount();    //Ĭ�Ϲ��캯��
		BankAccount(const string & name, const string & Account, double deposit = 0.0);     //���캯��

		void showdata() const;   //��Ա������������ʾ�����������˺źʹ��

		void putintoaccount(double deposit);      //�������depositָ������Ŀ

		void withdraw(double deposit);     //ȡ������depositָ������Ŀ


		~BankAccount();        //��������

};


#endif

