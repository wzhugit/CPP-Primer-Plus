//delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);//����ԭ��
int main()
{
	char * name;
	name = getname();
	cout<<name<<" at "<<(int *)name<<"\n";
	delete [] name;//ɾ��nameָ��ָ�������

	name = getname();//����ʹ����ǰ��յ��ڴ�
	cout<<name<<" at "<<(int *)name<<"\n";//��ָ�븳��cout������ʾ��ָ����ָʾ������
	delete [] name;
	cin.get();
	return 0;
}

char * getname()      //����ָ�����ַ�����ָ��,char *������������Ϊchar�͵�ָ��
{
	char temp[90];
	cout<<"Enter last name:";
	cin>>temp;
	char * pn = new char[strlen(temp)+1];
	strcpy(pn,temp);

	return pn;
}
