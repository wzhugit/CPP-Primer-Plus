//C++ Primer Plus chapter14ex1.h
#include <iostream>
#include <string>
#include <valarray>

using std::string;

template <class T1, class T2>
class Pair
{
private:

	T1 a;

	T2 b;

public:
	//T1& first();

	//T2& second();


	T1 first() const
	{
		return a;
	}

	T2 second() const
	{
		return b;
	}


	void Seta(T1 aval)
	{
		a = aval;
	}

	void Setb(T1 bval)
	{
		b = bval;
	}

	Pair(const T1& aval, const T2& bval) :a(aval), b(bval)
	{

	}

	Pair()
	{

	}

};



class Wine
{
private:
	string WineName;   //saves the Name of the Wine

	int numofyears;   //the total number of the years

	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	//ArrayInt saves the year of the Wine brewed
	//and the number of bottles

	PairArray YearandBottles;

public:
	Wine(const char* label, int numberofyears);    //constructor, label -- the label of the Wine; 
	//numberofyears -- number of year

	Wine(const char* label, int numberofyears, int numberyears[], int bottles[]);     //constructor, label -- the label of the Wine;
	//numberofyears -- year number;
	//numberyears -- year list
	//bottles -- bottle number list

	void GetBottles();    //solicit Input of Year , Bottle count


	string& Label()       //return a reference that points to a WineName
	{
		return WineName;
	}

	int sum();    //return the number of total bottles in the second valarray<int> object in the Pair object

	void Show() const;


};