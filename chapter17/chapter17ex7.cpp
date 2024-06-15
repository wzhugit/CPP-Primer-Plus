#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "chapter17ex7.h"

Store::Store(std::ostream& os):fileStream(os)
{
	
}

void Store::operator()(const std::string& str)
{
	int stringlength = str.length();
	fileStream.write((char*)&stringlength, sizeof(std::size_t));   //store length
	fileStream << std::endl;
	fileStream.write(str.data(), stringlength);     //store characters

	std::cout << "The string to write to the file is: \n"
		<< str << std::endl;
}

