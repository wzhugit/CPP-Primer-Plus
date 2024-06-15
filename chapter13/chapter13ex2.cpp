//C++ Primer Plus chapter13ex2.cpp

#include <iostream>
#include <cstring>    //for strcpy()
#include "chapter13ex2.h"

Cd::Cd(const char* authors, const char* albumlabel, int numselection, double timelen)
	:selections(numselection), playtime(timelen)     //timelen in minutes
{
	performers = new char[std::strlen(authors) + 1];
	performers[0] = '\0';

	label = new char[std::strlen(albumlabel) + 1];
	label[0] = '\0';


#pragma warning(suppress : 4996)
	strcpy(performers, authors);       //to    from

#pragma warning(suppress : 4996)
	strcpy(label, albumlabel);
}

Cd::Cd(const Cd& d)
{
#pragma warning(suppress : 4996)
	performers = new char[std::strlen(d.performers) + 1];
	performers[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(performers, d.performers);

#pragma warning(suppress : 4996)
	label = new char[std::strlen(d.label) + 1];
	label[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(label, d.label);



	selections = d.selections;      //类的成员函数可以直接访问同一个类的对象的私有成员（private），通过obj.private

	playtime = d.playtime;


}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report() const
{
	std::cout << "The Performers are " << performers << std::endl;

	std::cout << "The Label is " << label << std::endl;

	std::cout << "There are " << selections << " pieces of music." << std::endl;

	std::cout << "The Total Play Time is " << playtime << " minutes." << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	performers[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(performers, d.performers);       //to    from

	label = new char[strlen(d.label) + 1];
	label[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(label, d.label);       //to    from

	selections = d.selections;

	playtime = d.playtime;

	return *this;
}


Classic::Classic(const char* nameofworks,
	const char* artist, const char* country, int selections,
	double playtimeinmin) :Cd(artist, "Classic", selections,
		playtimeinmin)
{
	works = new char[strlen(nameofworks) + 1];
	works[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(works, nameofworks);       //to    from

}

Classic::Classic(const Classic& d) :Cd((Cd)d)
{
	works = new char[strlen(d.works) + 1];
	works[0] = '\0';

#pragma warning(suppress : 4996)
	strcpy(works, d.works);       //to    from
}

Classic::~Classic()
{
	delete[] works;
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "The names of the works are " << works << std::endl;
}

Classic& Classic::operator=(const Classic& d)
{
	Cd::operator=(d);

	works = new char[strlen(d.works) + 1];

#pragma warning(suppress : 4996)
	strcpy(works, d.works);       //to    from

	return *this;
}