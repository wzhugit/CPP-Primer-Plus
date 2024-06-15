//C++ Primer Plus chapter14ex4.cpp
#include "chapter14ex4.h"


Card::Card(CardType CT, int CV) :cardtype(CT), cardvalue(CV)
{

}

void Card::Show() const
{
	std::cout << "You got the Card :" << std::endl;

	std::cout << cardtype << " " << cardvalue << std::endl;
}


Person::Person(std::string FName, std::string LName) :FirstName(FName), LastName(LName)
{

}

void Person::Set()
{
	std::string FName;
	std::cout << "Please enter the First Name:" << std::endl;
	std::cin >> FName;

	std::string LName;
	std::cout << "Please enter the Last Name:" << std::endl;
	std::cin >> LName;

	FirstName = FName;
	LastName = LName;
}

void Person::Show() const      //Show the FirstName and the LastName
{
	std::cout << "The Person is :\n" << FirstName << " " << LastName << std::endl;
}


Gunslinger::Gunslinger(std::string FName, std::string LName, double dtime, int numscratches) :
	Person(FName, LName), drawtime(dtime), numofscratches(numscratches)
{

}

void Gunslinger::Set()
{

	Person::Set();

	std::cout << "Please enter the Draw Time:" << std::endl;
	std::cin >> drawtime;

	std::cout << "Please enter the Number of the Scratches:" << std::endl;
	std::cin >> numofscratches;



}

double Gunslinger::Draw() const      //returns the time that the gunman needs to draw the gun
{
	return drawtime;
}

void Gunslinger::Show() const
{
	Person::Show();

	std::cout << "The Gunman needs " << drawtime
		<< "s to draw the gun." << std::endl;

	std::cout << "There are " << numofscratches
		<< " scratches on the gun" << std::endl;

}



PokerPlayer::PokerPlayer(std::string FName, std::string LName) :Person(FName, LName)
{

}

Card PokerPlayer::Draw()  	   //returns a Card object with random Number 
//between 1 and 52 and with random Style
{
	//Card::CardType CT;
	//return Card(rand() % 4, rand() % 13 + 1);
	return Card(club, 6);

}

void PokerPlayer::Set()
{
	Person::Set();
}

void PokerPlayer::Show() const
{
	Person::Show();

}

/*
BadDude::BadDude() :Person(), Gunslinger(), PokerPlayer()     //default constructor
{

}
*/

BadDude::BadDude(std::string FName, std::string LName, double dtime, int numscratches)
	:Person(FName, LName), Gunslinger(FName, LName, dtime, numscratches), PokerPlayer(FName, LName)//constructor
{

}

void BadDude::Set()
{
	Person::Set();
}

double BadDude::Gdraw()
{
	return Gunslinger::Draw();
}

Card BadDude::Cdraw()
{
	//return Card(rand() % 4, rand() % 13 + 1);
	if (rand() % 4 == 0)
		return Card(club, rand() % 13 + 1);

	if (rand() % 4 == 1)
		return Card(diamonds, rand() % 13 + 1);

	if (rand() % 4 == 2)
		return Card(hearts, rand() % 13 + 1);

	if (rand() % 4 == 3)
		return Card(spades, rand() % 13 + 1);

}

void BadDude::Show() const
{
	std::cout << "The Person is a Bad Guy" << std::endl;
}