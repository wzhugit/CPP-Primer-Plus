#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable * ps = new inflatable;
	cout<<"Enter name of inflatable item:";
	cin.get(ps->name,20);                        //���ʳ�Ա�ķ���1
	cout<<"Enter volume in cubic feet:";
	cin>>(*ps).volume;                           //���ʳ�Ա�ķ���2
	cout<<"Enter price:$";
	cin>>ps->price;
	cout<<"Name: "<<(*ps).name<<endl;
	cout<<"Volume: "<<ps->volume<<" cubic feet\n";
	cout<<"price:$"<<ps->price<<endl;
	delete ps;
	cin.get();
	return 0;
}