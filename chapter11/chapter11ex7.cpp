#include "chapter11ex7.h"
#include <cmath>

Complex::Complex(double realpart, double imagpart)    //constructor
{
	real = realpart;
	imag = imagpart;
}

Complex Complex::operator+(const Complex& b) const     //复数+复数加法
{
	return Complex(real + b.real, imag + b.imag);
}

Complex Complex::operator-(const Complex& b) const    //复数-复数减法
{
	return Complex(real - b.real, imag - b.imag);
}

Complex Complex::operator*(const Complex& b) const   //复数*复数乘法
{
	return Complex(real * b.real - imag * b.imag, b.real * imag + real * b.imag);
}

Complex Complex::operator* (const double b) const     //复数*实数乘法
{
	return Complex(b * real, b * imag);
}

Complex Complex::conjugate() const  //共轭复数
{
	return Complex(real, -imag);
}


//友元函数
Complex operator+(double real, const Complex b)     //实数+复数加法
{
	return Complex(real * b.real, real * b.imag);
}

Complex operator-(double real, const Complex b)     //实数-复数减法
{
	return Complex(real - b.real, -b.imag);
}


Complex operator*(double x, const Complex b)    //实数*复数乘法
{
	return Complex(x * b.real, x * b.imag);
}

std::istream& operator>>(std::istream& is, Complex& b)    //输入>>重载
{
	is >> b.real >> b.imag;
	return is;
}

std::ostream& operator<<(std::ostream& os, Complex b)    //输出<<重载
{
	if (b.imag > 0)
	{
		os << b.real << "+" << b.imag << "i" << std::endl;
		return os;
	}

	if (b.imag == 0)
	{
		os << b.real << std::endl;
		return os;
	}

	if (b.imag < 0)
	{
		os << b.real << "-" << abs(b.imag) << "i" << std::endl;
		return os;
	}
}
