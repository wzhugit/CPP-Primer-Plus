//C++ Primer Plus example 10.1
//stock00.h -- Stock class interface
//version 00
//ͷ�ļ�������ȷ��ͷ�ļ�������ʱû���ض��壬�䱾��STOCK00_H_������ʹ�ã�ֻ��һ����ʶ��
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock    //class declaration
{
private:
	std::string company;      //������ݳ�Աͨ������˽�в��֣�Ϊ������������
	long shares;
	double share_val;
	double total_val;
	void set_tot() 
	{
		total_val = shares * share_val;
	}

public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};     //note semicolon ';' at the end

#endif

