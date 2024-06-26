//C++ Primer Plus chapter7ex7.cpp
/*
//arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
//function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);//don't change data
void revalue(double r, double ar[], int n);

int main()
{
using namespace std;
double properties[Max];

int size = fill_array(properties, Max);
show_array(properties, size);
if (size > 0)
{
cout << "Enter revaluation factor:";
double factor;
while (!(cin >> factor))     //bad input
{
cin.clear();
while (cin.get() != '\n')
continue;
cout << "Bad input;Please enter a number:";
}
revalue(factor, properties, size);
show_array(properties, size);
}
cout << "Done.\n";
cin.get();
cin.get();
return 0;
}

int fill_array(double ar[], int limit)
{
using namespace std;
double temp;
int i;
for (i = 0; i < limit; i++)
{
cout << "Enter value #" << (i + 1) << ":";
cin >> temp;
if (!cin)   //bad input
{
cin.clear();
while (cin.get() != '\n')
continue;
cout << "Bad input;input process terminated.\n";
break;
}
else if (temp < 0)
break;
ar[i] = temp;
}
return i;
}


//the following function can use,but not alter.
//the array whose address is ar
void show_array(const double ar[], int n)       //该函数不改变数组元素
{
using namespace std;
for (int i = 0; i < n; i++)
{
cout << "Property #" << (i + 1) << ":$";
cout << ar[i] << endl;
}
}

//multiplies each element of ar[] by r
void revalue(double r, double ar[], int n)           //该函数对数组元素进行操作
{
for (int i = 0; i < n; i++)
ar[i] *= r;
}
*/

//使用两个指针参数来表示区间，返回指向最后被填充位置的指针
#include <iostream>
using namespace std;

double *fill_array(double *a)
{
	int i = 0;
	while (cin >> a[i++]) {
		if (i == 5)
			break;
	}
	return &a[i];
}

void show_array(double *a, double *b)
{
	while (a != b) {
		cout << *a << "\t";
		++a;
	}
	cout << endl;
}

void revalue(double r, double *a, double *b)
{
	while (a != b) {
		(*a) *= r;
		++a;
	}
}

void main()
{
	double a[5];
	double *e = fill_array(a);
	show_array(a, e);
	revalue(0.5, a, e);
	show_array(a, e);
	system("pause");
}