//C++ Primer Plus example11.2
//mytime0.cpp -- implementing Time methods
#include <iostream>
#include "mytime0.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::Sum(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;                                //�˳�Ա�����ķ���ֵ���������ã���Ϊ�ú���������һ���µĶ���sum��,����ʾ��������Time����ĺ͡�The return value of this member function can not be a reference ,because the function will create a new object (sum) to express the SUM of the other 2 Time Objects.
	//���ض������������������������������ĸ����������ú�������ʹ������Ȼ�������������ΪTime &�������õĽ���sum����The returned object (as is shown in the codes) will create a copy of the object,which can be called by the functions which call the member function, however, the referenced object will be sum if the return type is Time &.
	// ������sum�����Ǿֲ��������ں�������ʱ����ɾ����������ý�ָ��һ�������ڵĶ���ʹ�÷�������Time��ζ�ų�����
	// ɾ��sum֮ǰ�������Ŀ��������ú������õ��ÿ�����Because object sum is a local object,which will be destroyed when the funtion ends, the reference will point to a no longer existing object. The apply of the return type Time means the program will copy the object sum before sum is destroyed and the callable function will get the copy.
}

void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}