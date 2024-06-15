//C++ Primer Plus chapter11ex7.h
#include <iostream>
class Complex
{
private:
	double real;
	double imag;

public:
	Complex(double realpart = 0.0, double imagpart = 0.0);      //constructor


	//operator reload
	Complex operator+(const Complex& b) const;     //复数+复数加法

	Complex operator-(const Complex& b) const;    //复数-复数减法

	Complex operator*(const Complex& b) const;   //复数*复数乘法

	Complex operator*(const double b) const;     //复数*实数乘法

	Complex conjugate() const;  //共轭复数

	friend Complex operator+(double real, const Complex b);     //实数+复数加法

	friend Complex operator-(double real, const Complex b);     //实数-复数减法



	friend Complex operator*(double x, const Complex b);    //实数*复数乘法

	friend std::istream& operator>>(std::istream& is, Complex& b);    //输入>>重载

	friend std::ostream& operator<<(std::ostream& os, Complex b);    //输出<<重载

};