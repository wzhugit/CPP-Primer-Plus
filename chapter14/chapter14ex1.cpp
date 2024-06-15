#include "chapter14ex1.h"
#include <iostream>

/*
template <class T1, class T2>
T1& Pair<T1, T2>::first()
{
	return a;
}

template <class T1, class T2>
T2& Pair<T1, T2>::second()
{
	return b;
}
*/


Wine::Wine(const char* label, int numberofyears)
	:WineName(label)
	//constructor, label -- the label of the Wine; 
	//numberofyears -- number of years
{
	numofyears = numberofyears;

	//YearandBottles.Setb(numberofyears);
}

Wine::Wine(const char* label, int numberofyears, int numberyears[], int bottles[])
//constructor, label -- the label of the Wine;
//numberofyears -- year number;
//numberyears -- year list
//bottles -- bottle number list
	:WineName(label)
	//constructor, label -- the label of the Wine; 
	//numberofyears -- number of years
{
	int yearlist[100];

	int bottlelist[100];

	numofyears = numberofyears;


	for (int i = 0; i < numofyears; i++)
	{
		yearlist[i] = numberyears[i];

		bottlelist[i] = bottles[i];
	}

	ArrayInt YearArray(yearlist, numofyears);

	ArrayInt BottleArray(bottlelist, numofyears);

	YearandBottles.Seta(YearArray);

	YearandBottles.Setb(BottleArray);
	//YearandBottles.Setb(numberofyears);
}


void Wine::GetBottles()    //get the User Input of Year and Bottle Numbers
{
	std::cout << "Enter " << WineName << " data for "
		<< numofyears << " year(s)" << std::endl;

	ArrayInt year(numofyears);
	ArrayInt bottlenumber(numofyears);

	for (int i = 0; i < numofyears; i++)
	{


		std::cout << "Please enter the YEAR of the " << i + 1 << "th Wine brewed : " << std::endl;
		std::cin >> year[i];


		std::cout << "Enter Number of Bottles for that year: ";
		std::cin >> bottlenumber[i];

	}

	YearandBottles.Seta(year);
	YearandBottles.Setb(bottlenumber);

}

int Wine::sum()
{
	return YearandBottles.second().sum();
}

void Wine::Show() const
{

	std::cout << WineName << ": " << std::endl;

	for (int i = 0; i < numofyears; i++)
	{


		std::cout << "Year: " << YearandBottles.first()[i] << std::endl;

		std::cout << "Bottles: " << YearandBottles.second()[i] << std::endl;
	}



}

