//C++ Primer plus chapter15ex1.h
#include <iostream>

#ifndef TV_H_
#define TV_H_

class Tv
{
public:
	friend class Remote;     //Remote can access Tv private parts

	enum { Off, On };

	enum { MinVal, MaxVal = 20 };

	enum { Antenna, Cable };

	enum TVORDVD { TV, DVD };

	Tv(int s = Off, int vol = 20, int mc = 125, int currentchannel = 50, int mode = Cable, int inputsurce = TV) :
		state(s), volume(vol), maxchannel(mc),
		channel(currentchannel), mode(Cable), input(inputsurce)
	{

	}

	void onoff()
	{
		state = (state == On) ? Off : On;
	}

	bool ison() const
	{
		return state == On;
	}

	bool volup();

	bool voldown();

	void chanup();

	void chandown();

	void set_mode()
	{
		mode = (mode == Antenna) ? Cable : Antenna;
	}

	void set_input()
	{
		input = (input == TV) ? DVD : TV;
	}

	void ChangeMode(Remote& r);     //Change the Remote State S between REGULAR and INTERACTIVE

	void settings() const;    //display all settings

private:
	int state;       //on or off
	int volume;      //assumed to be digitized
	int maxchannel;   //maximum number of channels
	int channel;      //current channel setting
	int mode;       //anntenna or cable
	int input;     //TV or DVD
};

class Remote
{
private:
	int mode;      //controls TV or DVD



public:
	enum State { REGULAR, INTERACTIVE };
	State S;       //state member S = REGULAR, INTERACTIVE

	friend class Tv;
	Remote(Tv::TVORDVD m = Tv::TV, State s = REGULAR) :mode(m), S(s)
	{

	}

	bool volup(Tv& t)
	{
		return t.volup();
	}

	bool voldown(Tv& t)
	{
		return t.voldown();
	}

	void onoff(Tv& t)
	{
		t.onoff();
	}

	void chanup(Tv& t)
	{
		t.chanup();
	}

	void chandown(Tv& t)
	{
		t.chandown();
	}

	void set_chan(Tv& t, int c)
	{
		t.channel = c;
	}

	void set_mode(Tv& t)
	{
		t.set_mode();
	}

	void set_input(Tv& t)
	{
		t.set_input();
	}

	void show_mode()
	{
		if (S == REGULAR)
			std::cout << "The Remote is now on REGULAR Mode"
			<< std::endl;

		if (S == INTERACTIVE)
			std::cout << "The Remote is now on INTERACTIVE Mode"
			<< std::endl;
	}
};
#endif