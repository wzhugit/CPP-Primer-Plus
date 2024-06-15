#include <iostream>
using namespace std;
#include "chapter11ex7.h"

int main()
{
	Complex a(3.0, 4.0);       //initialize to (3,4i)

	cout << "a = " << a << endl;

	Complex c;

	cout << "Enter a complex number (q to quit):\n";  //以空格分隔实部和虚部

	while (cin >> c)
	{
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << c.conjugate() << endl;
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c << endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2 * c << endl;
		cout << "Enter a complex number (q to quit):" << endl;
	}

	cout << "Done!" << endl;
}