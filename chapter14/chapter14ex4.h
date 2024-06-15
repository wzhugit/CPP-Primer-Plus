//C++ Primer Plus chapter14ex4.h

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <iostream>
#include <cstdlib>     //for rand()

enum CardType { club, diamonds, hearts, spades };

class Card
{
private:
	//enum CardType { club, diamonds, hearts, spades };
	CardType cardtype;

	int cardvalue;

public:
	Card(CardType CT, int CV);       //constructor
	void Show() const;     //shows all the information

};

class Person
{
private:
	std::string FirstName;
	std::string LastName;

public:
	Person(std::string FName = "defaultfname", std::string LName = "defaultlname");     //constructor

	virtual void Set();

	virtual void Show() const;     //Show the FirstName and the LastName


};

class Gunslinger :virtual public Person
{
private:
	double drawtime;      //the time that the gunman needs to draw the gun
	int numofscratches;     //the number of the scratches on the gun

public:
	Gunslinger(std::string FName = "defaultFName",
		std::string LName = "defaultLName", double dtime = 10, int numscratches = 100);    //constructor

	virtual void Set();

	double Draw() const;        //returns the time that the gunman needs to draw the gun
	virtual void Show() const;     //shows all the information
};

class PokerPlayer :virtual public Person
{

public:
	PokerPlayer(std::string FName = "defaultFName", std::string LName = "defaultLName");
	Card Draw();      //returns a Card object with random Number between 1 and 52 and with random Style

	virtual void Set();

	virtual void Show() const;    //shows all the information
};

class BadDude :public Gunslinger, public PokerPlayer
{
public:
	//BadDude();             //default constructor


	BadDude(std::string FName = "defaultFName", std::string LName = "defaultLName",
		double dtime = 10, int numscratches = 500);    //constructor

	virtual void Set();      //redefine the version belonging to BadDude

	double Gdraw();      //returns the time the badguy needs to draw the gun
	Card Cdraw();      //return the next Poker Card
	virtual void Show() const;     //shows the data
};

#endif
