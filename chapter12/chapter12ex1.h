//C++ Primer Plus chapter12ex1.h
//cow.h
#ifndef COW_H_

class Cow
{
	char name[20];
	char* hobby;
	double weight;

public:
	Cow();        //default constructor
	Cow(const char* nm, const char* ho, double wt);     //constructor #1
	Cow(const Cow& c);     //constructor #2
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const;      //display all cow data
};

#endif // !COW_H_

