#include <iostream>
#include <string>

struct pizza
{
	std::string name;
	double diameter;
	double weight;

};
int main()
{
	using namespace std;
	pizza company;
	//�ṹ����������������������Ϊ�洢���ݵ�һ���ֶ�
	cout << "������������˾������"<< endl;
	cin >> company.name;
	cout << "������������ֱ��" << endl;
	cin >> company.diameter;
	cout << "������������������" << endl;
	cin >> company.weight;
	cout << company.name
		 <<','
		 << company.diameter
		 <<','
		 << company.weight;
	cin.get();
}