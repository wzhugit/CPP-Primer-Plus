//C++ Primer plus chapter15ex1.cpp
#include "chapter15ex1.h"

bool Tv::volup()
{
	if (state == On)
	{
		if (volume < MaxVal)
		{
			volume++;
			return true;
		}

		else
			return false;
	}
}

bool Tv::voldown()
{
	if (state == On)
	{
		if (volume > MinVal)
		{
			volume--;
			return true;
		}

		else
			return false;
	}
}

void Tv::chanup()
{
	if (state == On)
	{
		if (channel < maxchannel)
			channel++;

		else
			channel = 1;
	}
}

void Tv::chandown()
{
	if (ison())
	{
		if (channel > 1)
			channel--;

		else
			channel = maxchannel;
	}
}

void Tv::ChangeMode(Remote& r)
{
	if (ison())          //if TV is on, TV object can switch the 
		//state value S between REGULAR and INTERACTIVE
	{
		if (r.S == Remote::REGULAR)
			r.S = Remote::INTERACTIVE;

		else if (r.S == Remote::INTERACTIVE)
			r.S = Remote::REGULAR;
	}

	else
	{

	}
}

void Tv::settings() const
{
	if (!ison())
	{
		std::cout << "The State of the TV is OFF" << std::endl;
	}

	if (ison())
	{
		std::cout << "The State of the TV is ON" << std::endl;
	}

	std::cout << "The Volume of the TV is " << volume << std::endl;
	std::cout << "The Maximum Channel number of the TV is " << maxchannel << std::endl;

	if (ison())
	{
		std::cout << "Current Channel is " << channel << std::endl;
	}

	if (mode == Antenna)
	{
		std::cout << "The Mode of the TV is ANTENNA" << std::endl;
	}

	if (mode == Cable)
	{
		std::cout << "The Mode of the TV is CABLE" << std::endl;
	}

	if (input == TV)
		std::cout << "The input source is TV." << std::endl;

	if (input == DVD)
		std::cout << "The input source is DVD." << std::endl;
}