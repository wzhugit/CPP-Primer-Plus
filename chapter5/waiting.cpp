//waiting.pp -- using clock() in a time deley loop
#include <iostream>
#include <ctime>
int main()
{
	using namespace std;
	cout << "Enter the deley time,in seconds:";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";
	cin.get();
	return 0;
}