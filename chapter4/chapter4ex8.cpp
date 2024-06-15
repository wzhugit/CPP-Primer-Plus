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
	pizza * company = new pizza;
	//结构体变量不能整体输出，仅作为存储数据的一种手段
	cout << "输入披萨饼的直径" << endl;
	cin>>(* company).diameter;
	cout << "输入披萨饼公司的名称" << endl;
	cin >> (*company).name;
	cout << "请输入披萨饼的重量" << endl;
	cin>>(*company).weight;
	cout << "Company name:"<<company->name
		<< ','
		<< "Diameer:"<<company->diameter
		<< ','
		<< "Weight:"<<company->weight<<endl;
	cin.get();
	return 0;
}