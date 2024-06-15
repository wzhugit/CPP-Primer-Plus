//C++ Primer Plus chapter10ex3use.cpp²âÊÔÎÄ¼þ
#include "chapter10ex3.h"
int main()
{
	//non-interactive version
	golf golfobj1 = golf("Jack", 10);
	golfobj1.showgolf();
	//reset handicap to 20
	golfobj1.resethandicap(20);
	//show data
	golfobj1.showgolf();

	//interactive version
	golf golfobj2 = golf();
	golfobj2.showgolf();
	//reset handicap to 30
	golfobj2.resethandicap(30);
	//show data
	golfobj2.showgolf();

	return 0;
}