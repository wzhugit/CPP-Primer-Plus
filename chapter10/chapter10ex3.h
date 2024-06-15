//C++ Primer Plus chapter10ex3.h
#include <string>
#ifndef GOLF_H_
#define GOLF_H_
class golf
{
	private:
		std::string fullname;
		int handicap;

	public:
		//non-interactive version
		//constructor sets golf structure to provided name,handicap
		//using values passed as arguments to the constructor
		golf(const std::string name, int hc);

		//interactive version (default constructor)
		//function solicits name and handicap from user
		//and sets the members of g to the values entered
		golf();

		//setgolf() interactive version, but use constructor
		golf setgolf();

		//function resets handicap to new value
		void resethandicap(int hc);

		//function displays contents of golf structure
		void showgolf() const;
};


#endif // !GOLF_H_
