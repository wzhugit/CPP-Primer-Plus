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
	//结构体变量不能整体输出，仅作为存储数据的一种手段
	cout << "输入披萨饼公司的名称"<< endl;
	cin >> company.name;
	cout << "输入披萨饼的直径" << endl;
	cin >> company.diameter;
	cout << "请输入披萨饼的重量" << endl;
	cin >> company.weight;
	cout << company.name
		 <<','
		 << company.diameter
		 <<','
		 << company.weight;
	cin.get();
}