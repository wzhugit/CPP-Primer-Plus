#include "chapter14ex2.h"

Wine::Wine(const char* label, int numberofyears)      //constructor, label -- the label of the Wine; 
//numberofyears -- number of year
	:PairArray(), WineName(label), numofyears(numberofyears)
{

}

Wine::Wine(const char* label, int numberofyears, int numberyears[], int bottles[]) :
	//constructor, label -- the label of the Wine;
	//numberofyears -- year number;
	//numberyears -- year list;
	//bottles -- bottle number list
	PairArray(ArrayInt(numberyears, numberofyears),
		ArrayInt(bottles, numberofyears)),
	WineName(label), numofyears(numberofyears)
{

}

void Wine::GetBottles()
{
	int yearlist[100];

	int bottlelist[100];

	std::cout << "Enter " << WineName << " data for "
		<< numofyears << " year(s)" << std::endl;

	for (int i = 0; i < numofyears; i++)
	{


		std::cout << "Please enter the YEAR of the " << i + 1 << "th Wine brewed : " << std::endl;
		std::cin >> yearlist[i];


		std::cout << "Enter Number of Bottles for that year: ";
		std::cin >> bottlelist[i];

	}

	Seta(ArrayInt(yearlist, numofyears));    //set years

	Setb(ArrayInt(bottlelist, numofyears));    //set bottles for years



}


int Wine::sum()
{
	return second().sum();
}

void Wine::Show() const
{
	std::cout << WineName << ":" << std::endl;

	for (int i = 0; i < numofyears; i++)
	{


		std::cout << "Year: " << first()[i] << std::endl;

		std::cout << "Bottles: " << second()[i] << std::endl;
	}
}