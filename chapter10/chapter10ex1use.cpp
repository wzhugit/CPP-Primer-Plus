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

		BankAccount bankaccount1 = BankAccount(name, accountnumber, deposit);    //���ù��캯��


		//���ó�Ա����
		bankaccount1.showdata();

		bankaccount1.putintoaccount(100);  //���˺��ڴ���100

		bankaccount1.showdata();    //��ʾ����

		bankaccount1.withdraw(50);  //���˺���ȡ��50

		bankaccount1.showdata();    //��ʾ����

	}      //������������
	
	return 0;
}