//C++ Prier Plus chapter10ex7.h
//Plorg������(���ݳ�Ա�ͳ�Ա����ԭ��)
#ifndef PLORG
#define PLORG
#include <string>
using std::string;

class Plorg
{
private:
	string name;    //plorg�����Ʋ�����19���ַ�
	int C1;           //����ָ��C1����һ������

public:
	Plorg(string newname = "Plorga", int newc1 = 50);          //�µ�plorg�������ƣ�Ĭ������Ϊ��Plorga"��Ĭ��C1ֵΪ50
	void newplorg(int newc1);                        //plorg��C1ֵ�����޸�
	void reportplorg() const;                            //plorg�ɱ��������ƺ�C1
};
#endif