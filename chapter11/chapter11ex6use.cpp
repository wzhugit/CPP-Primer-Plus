#include <iostream>
#include "chapter11ex6.h"

int main()
{
	Stonewt max(Stonewt ar[6], int size);   //find the max of the array
	Stonewt min(Stonewt ar[6], int size);   //find the min of the array


	using namespace std;

	Stonewt stone[6]{ Stonewt(20),Stonewt(20,3),Stonewt(17,5) };

	Stonewt stone11 = Stonewt(11, 0);

	for (int i = 3; i < 6; i++)
	{
		cout << "enter the " << i + 1 << "th element of the stone array in pounds." << endl;
		cin >> stone[i].pounds;
	}

	cout << "The maximum element of the array is " << max(stone, 6) << endl;
	cout << "The minimum element of the array is " << min(stone, 6) << endl;

	int numnoless11 = 0;

	for (int i = 0; i < 6; i++)
	{
		if (stone[i] >= stone11)
			numnoless11++;
	}

	cout << "Thera are " << numnoless11 << " elements that is no less than 11 Stone." << endl;

	return 0;
}


Stonewt max(Stonewt ar[6], int size)   //find the max of the array
{
	double maxval = ar[0].pounds;
	Stonewt maxmember = ar[0];

	for (int i = 1; i < size; i++)
	{
		if (ar[i].pounds >= maxval)
		{
			maxval = ar[i].pounds;
			maxmember = ar[i];
		}
		else
			continue;
	}
	return maxmember;
}

Stonewt min(Stonewt ar[6], int size)   //find the min of the array
{
	double minval = ar[0].pounds;
	Stonewt minmember = ar[0];

	for (int i = 1; i < size; i++)
	{
		if (ar[i].pounds <= minval)
		{
			minval = ar[i].pounds;
			minmember = ar[i];
		}
		else
			continue;
	}
	return minmember;
}