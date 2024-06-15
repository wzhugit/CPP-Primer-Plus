#include <iostream>
template <typename T>
T max(T num1, T num2)
{
	return num1 > num2 ? num1 : num2;
}

int main()
{
	using namespace std;

	cout << "The greater one between 5 and 10 is " << max(5, 10) << endl;
	cout << "The greater one between 5.5 and 6.2 is " << max(5.5, 6.2) << endl;
	return 0;
}

