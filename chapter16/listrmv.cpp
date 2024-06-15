// C++ Primer Plus example list 16.18
//listrmv.cpp -- applying the STL to a string
#include <iostream>
#include <list>
#include <algorithm>

void Show(int);
const int LIM = 10;

int main()
{
	using namespace std;
	int ar[LIM] = { 4,5,4,2,2,3,4,8,1,4 };
	list<int> la(ar, ar + LIM);
	list<int> lb(la);
	cout << "Original list contents:\n\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	//member function version
	la.remove(4);
	cout << "After using the remove() method:\n";
	cout << "la:\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;

	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "After using the remove() function:\n";
	cout << "lb:\t";
	//去除4后，长度变为6，
	//但通用算法无法调整容器长度，最后4个用原有的元素填充
	//after removing 4,the length will be 6,
	//but the generic function cannot adjust the length of
	//the container, so that the remaining elements are filled with
	//the original last 4 elements
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;
	lb.erase(last, lb.end());
	cout << "After using the erase() method:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;

	return 0;
}

void Show(int v)
{
	std::cout << v << ' ';
}
