//C++ Primer Plus chapter11ex2.cpp

#include <cmath>
#include "chapter11ex2.h"    //include <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
using std::endl;

namespace VECTOR
{
	//compute degrees in one radian
	//const double Rad_to_deg = 45.0 / atan(1.0);
	//should be about 57.29577951308232

	//private methods
	//calculates magnitude from x and y


	//public methods
	Vector::Vector()         //default constructor
	{
		x = y = 0.0;
		mode = RECT;
	}

	//construct vector from rectangular coordinates if form is r
	//(the dedault) or else from polar coordinates if form is p
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;

		if (form == RECT)
		{
			x = n1;
			y = n2;

		}

		else if (form == POL)
		{
			if (n1 >= 0)
				x = n1;                //represents length (Mode)

			else
				cout << "Incorrect 1st argument to Vector" << endl;

			if (n2 >= 0)
			{
				if (int(n2) % 360 < 180)
					y = int(n2) % 360 + n2 - int(n2);                //represents angle (in degree)

				if (int(n2) % 360 > 180)
					y = 180 - (int(n2) % 360 + n2 - int(n2));
			}

			else
			{
				if (int(-n2) % 360 < 180)
					y = -(int(-n2) % 360 + (-n2) - int(-n2));                //represents angle (in degree)

				if (int(-n2) % 360 > 180)
					y = (180 - (int(-n2) % 360 + (-n2) - int(-n2)));
			}


		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "vector set to 0\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	//reset vector from rectangular coordinates if form is
	//RECT (the default) or else from polar coordinates if
	//form is POL
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;

		}

		else if (form == POL)
		{
			x = n1;                //represents length (Mode)
			y = n2;                //represents angle
		}

		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "vector set to 0\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()       //destructor
	{

	}

	double Vector::magval() const
	{
		if (mode == RECT)
		{
			return sqrt(pow(x, 2) + pow(y, 2));
		}


		if (mode == POL)
			return x;
	}

	double Vector::angval() const
	{
		if (mode == RECT)
		{
			if ((x > 0) && (y > 0))
				return atan(y / x) * Rad_to_deg;
			if ((x > 0) && (y < 0))
				return -atan(-y / x) * Rad_to_deg;
			if ((x < 0) && (y > 0))
				return 180 - atan(y / (-x)) * Rad_to_deg;
			if ((x < 0) && (y < 0))
				return -180 + atan(y / x) * Rad_to_deg;
			if ((x == 0) && (y > 0))
				return 90;
			if ((x == 0) && (y < 0))
				return -90;
			if ((x >= 0) && (y == 0))
				return 0;
			if ((x < 0) && (y == 0))
				return 180;
		}

		if (mode == POL)
		{
			if ((y >= 0) && (y <= 180))
				return y;
			if ((y > 180) && (y < 360))
				return -(360 - y);
			if ((y < 0) && (y > -180))
				return y;
			if (y <= -180)
				return y + 360;
		}
	}

	void Vector::polar_mode()     //set to polar mode
	{
		if (mode == RECT)
		{
			if (x != 0)
			{
				double origx = x;
				double origy = y;
				x = sqrt(pow(origx, 2) + pow(origy, 2));
				y = atan(origy / origx) * Rad_to_deg;
			}

			else
			{
				double origx = x;
				double origy = y;

				if (origy != 0)
				{
					x = abs(y);

					if (origy > 0)
						y = 90;
					if (origy < 0)
						y = -90;

				}

				else
				{
					x = 0;
					y = 0;
				}

			}
			mode = POL;
		}

		else
			mode = POL;
	}

	void Vector::rect_mode()     //set to rectangular mode
	{
		if (mode == POL)
		{
			if (x != 0)
			{
				double origx = x;
				double origy = y;
				x = origx * cos(origy / Rad_to_deg);
				y = origx * sin(origy / Rad_to_deg);
			}

			else
			{
				x = 0;
				y = 0;
			}
			mode = RECT;
		}

		else
			mode = RECT;
	}

	//operator overloading
	//add two Vectors
	Vector Vector::operator+(const Vector& b) const   //二元运算符+
	{
		if (mode == RECT)
		{
			if (b.mode == RECT)
			{
				return Vector(x + b.x, y + b.y, RECT);
			}

			if (b.mode == POL)
			{
				Vector b_copy = Vector(b.x * cos(b.y / Rad_to_deg), b.x * sin(b.y / Rad_to_deg), RECT);
				return Vector(x + b_copy.x, y + b_copy.y, RECT);
			}
		}



		if (mode == POL)
		{
			if (b.mode == RECT)
				return Vector(x * cos(y / Rad_to_deg) + b.x, x * sin(y / Rad_to_deg) + b.y, RECT);

			else if (b.mode == POL)
				return Vector(x * cos(y / Rad_to_deg) + b.x * cos(b.y / Rad_to_deg), x * sin(y / Rad_to_deg) + b.x * sin(b.y / Rad_to_deg), RECT);
		}
	}

	//subtract Vector b from a
	Vector Vector::operator-(const Vector& b) const   //二元运算符-
	{
		if (mode == RECT)
		{
			if (b.mode == RECT)
				return Vector(x - b.x, y - b.y, RECT);

			else if (b.mode == POL)
				return Vector(x - b.x * cos(b.y / Rad_to_deg), y - b.x * sin(b.y / Rad_to_deg), RECT);
		}



		if (mode == POL)
		{
			if (b.mode == RECT)
				return Vector(x * cos(y / Rad_to_deg) - b.x, x * sin(y / Rad_to_deg) - b.y, RECT);

			else if (b.mode == POL)
				return Vector(x * cos(y / Rad_to_deg) - b.x * cos(b.y / Rad_to_deg), x * sin(y / Rad_to_deg) - b.x * sin(b.y / Rad_to_deg), RECT);
		}
	}

	//reverse sign of Vector
	Vector Vector::operator-() const            ////一元运算符 -
	{
		if (mode == RECT)
			return Vector(-x, -y, RECT);

		if (mode == POL)
			return Vector(x, y + 180, POL);
	}

	//multiply vector by n
	Vector Vector::operator*(double n) const
	{
		if (mode == RECT)
			return Vector(n * x, n * y, RECT);

		if (mode == POL)
			return Vector(n * x, y, POL);
	}

	//friends methods
	//multiply n by Vector a
	Vector operator*(double n, const Vector& a)//友元不是类的成员函数，故无所谓写在public，protected或是private中
	{
		return a * n;
	}

	//display rectangular coordinates if mode is RECT
	//else display polar coordinate if mode is POL
	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << "," << v.y << ")";
		else if (v.mode == Vector::Mode::POL)   //also can be written as "else if (v.mode == Vector::POL)"
		{
			os << "(m,a) = (" << v.magval() << ", "
				<< v.angval() << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}


}//end namespace VECTOR