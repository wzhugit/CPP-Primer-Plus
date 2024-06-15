//C++ Primer Plus chapter11ex3.h
//C++ Primer Plus example list 11.13
//vector.h
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };

		//RECT for rectangular, POL for Polar modes

	private:
		double x;    //horizontal value
		double y;    //vertical value
		double mag;  //length of vector
		double ang;  //direction of vector indegrees
		Mode mode;   //RECT or POL

		//private methods for setting values
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();

	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();   //destructor
		double xval() const { return x; }     //report x value
		double yval() const { return y; }     //report y value
		double magval() const { return mag; }    //report magnitude
		double angval() const { return ang; }     //report angle
		void polar_mode();            //set mode to POL
		void rect_mode();             //set mode to RECT

		//operator overloading
		Vector operator+(const Vector& b) const;    //二元运算符+
		Vector operator-(const Vector& b) const;  //二元运算符 -
		Vector operator-() const;         //一元运算符 -
		Vector operator*(double n) const;

		//friends
		friend Vector operator*(double n, const Vector& a);//友元不是类的成员函数，故无所谓写在public，protected或是private中
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}      //end namespace VECTOR
#endif // !VECTOR_H_


