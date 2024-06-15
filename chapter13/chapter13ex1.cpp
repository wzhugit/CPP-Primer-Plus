#include "chapter13ex1.h"
#include <cstring>
#include <iostream>

//Cd methods

/*
Cd::Cd()
{
	//delete[] performers;

	//performers = (char*)"";   //performers[0] = '\0';

	//performers = new char;

#pragma warning(suppress : 4996)
	strcpy(performers, "Default Performers");

	delete[] label;

	label[0] = '\0';

	//label = (char*)"Default Label";

#pragma warning(suppress : 4996)
	strcpy(label, "Default Labels");


	selections = 1;

	playtime = 100;
}
*/

Cd::Cd(const char* authors, const char* albumlabel, int numselection, double timelen)
{

	//delete[] performers;

#pragma warning(suppress : 4996)
	strcpy(performers, authors);   // to   from

	//delete[] label;

	label[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(label, albumlabel);

	selections = numselection;

	playtime = timelen;
}


/*
Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];

	label = new char[strlen(d.label) + 1];

	strcpy(performers, d.performers);   // to   from

	strcpy(label, d.label);   // to   from

	selections = d.

}
*/


/*
Cd& Cd::operator=(const Cd& d)
{
	*this = d;
	return *this;
}
*/

/*
Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}
*/

void Cd::Report() const
{
	std::cout << "The Performer is " << performers << std::endl;

	std::cout << "The Label is " << label << std::endl;
}



//Classic methods
Classic::Classic(const char* nameofworks, const char* artist,
	const char* country, int selections, double playtimeinmin) :Cd(artist, country, selections, playtimeinmin)    //selections saves the number of selections
{
	//delete[] works;

	works[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(works, nameofworks);   // to   from


}

/*
Classic::Classic() :Cd()
{
	delete[] works;
	works[0] = '\0';
}
*/

/*
Classic::~Classic()
{
	delete[] works;

}
*/

/*
Classic& Classic::operator=(const Classic& d)
{
	Cd::operator=((Cd)d);

	//*this = Cd;

	return *this;
}
*/


void Classic::Report() const
{
	Cd::Report();
	std::cout << "The works are " << works << std::endl;

}
