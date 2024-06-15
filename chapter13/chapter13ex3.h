//C++ Primer Plus chapter13ex3.h
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class baseABC
{
private:
	char* label;
	int rating;

public:
	baseABC();

	virtual void View() const = 0;    //pure virtual function
	//virtual ~baseABC();
};

//Base class Using DMA
class baseDMA :public baseABC
{
private:
	char* label;
	int rating;

public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);

	virtual void View() const;    //virtual function used to show the data


	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

//derived class without DMA
//no destructor needed
//uses implicit copy constructor
//uses implicit assignment operator
class lacksDMA :public baseABC
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];

public:
	lacksDMA(const char* c = "blank");
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
	virtual void View() const;    //virtual function used to show the data
	virtual ~lacksDMA();
};

//derived class with DMA
class hasDMA :public baseABC
{
private:
	char* style;

public:
	hasDMA(const char* s);
	hasDMA(const hasDMA& hs);
	virtual ~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
	virtual void View() const;    //virtual function used to show the data

};

#endif