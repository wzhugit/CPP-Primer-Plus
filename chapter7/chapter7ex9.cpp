//C++ Primer Plus�����ϰch7ex9.cpp
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

//getinfo() has two arguments:a pointer to the first element of an array
//of student structures and an int representing the number of elements of the 
//array. The function solicits and stores data about students. It terminates input upon 
//filling the array or upon encountering a blank line for the student name. The function
//returns the actual number of array elements filled.

int getinfo(student * pa, int n) 
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (cin >> (pa+i)->fullname)
		{
			;
		}

		if (cin >> (pa + i)->hobby)
		{
			;
		}

		if (cin >> (pa + i)->ooplevel)
		{
			;
		}

		else if (cin.get() == '\n')
		{
			break;
		}
	}
	return i;

};

//display1() takes a student structure as an argument
//and displays its contents
void display1(student st)
{
	cout <<"The student's full name is "<< st.fullname;
	cout << " and his or her hobby is " << st.hobby;
	cout << ", the ooplevel is "<<st.ooplevel;
};


//display2() takes the address of student structure as 
//an argument and displays the structure's contents
void display2(const student * ps)
{
	cout << "The content of the stucture is:" << endl;
	cout << "fullname is " << ps->fullname << endl;
	cout << "hobby is " << ps->hobby << endl;
	cout << "oop level is " << ps->ooplevel <<" "<< endl;
};

// display3() takes the address of the first element of an array
//of student structures and the number of array elements as arguments 
//and displays the contents of the structures
void display3(const student pa[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "The fullname of student " << i << "is" << pa[i].fullname;
		cout << "student " << i << "'s hobby is" << pa[i].hobby;
		cout << "student " << i << "'s ooplevel is" << pa[i].ooplevel;
	}
}

int main()
{
	cout << "Enter class size:";
	int class_size;
	cin >> class_size;

	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}