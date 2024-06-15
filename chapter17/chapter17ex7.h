#include <sstream>
#include <string>

class Store
{
public:
	Store(std::ostream & os);
	void operator()(const std::string&);

private:
	std::ostream & fileStream;
};