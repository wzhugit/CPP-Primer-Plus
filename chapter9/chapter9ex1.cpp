#include <iostream>
#include "golf.h"
int main()
{
	//iteractive golf version
	golf golfarray[10];
	int k = 0;
	for (int i = 0; i < 10;i++)
	{
		//setgolf(golfarray[i]);
		if (setgolf(golfarray[i]) == 0)

		{
			k = i;
			break;
		}
	}

	if (k == 0)
	{
		for (int i = 0; i < 10; i++)
		{

			showgolf(golfarray[i]);
		}
	}
	else
		if (k != 0)
			for (int i = 0; i < k; i++)
			{

				showgolf(golfarray[i]);
			}

	//non-interactive golf version
	golf golf1;
	setgolf(golf1, "andy", 1);
	showgolf(golf1);

	handicap(golf1, 10);
	showgolf(golf1);
	return 0;
}