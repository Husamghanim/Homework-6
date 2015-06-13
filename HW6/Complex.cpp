#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "Complex.h"


Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(double Re)
{
	a = Re;
	b = 0;
}

Complex::Complex(double Re, double Im)
{
	a=Re;
	b=Im;
}

double Complex::getRealPart() const
{
	return a;
}

double Complex::getImaginaryPart() const
{
	return b;
}

Complex Complex::add(const Complex& C1) const
{
	double Re = (this->a + C1.getRealPart());
	double Im = (this->b + C1.getImaginaryPart());
	return Complex(Re, Im);
}

Complex Complex::subtract(const Complex& C1) const
{
	double Re = (this->a - C1.getRealPart());
	double Im = (this->b - C1.getImaginaryPart());
	return Complex(Re, Im);
}

Complex Complex::multiply(const Complex& C1) const
{
	double Re = ((this->a * C1.getRealPart()) - (this->b * C1.getImaginaryPart()));
	double Im = ((this->a * C1.getRealPart()) + (this->b * C1.getImaginaryPart()));
	return Complex(Re, Im);
}

Complex Complex::divide(const Complex& C1) const
{
	double Re = (((this->a * C1.getRealPart()) + (this->b * C1.getImaginaryPart())) / ((C1.getRealPart() * C1.getRealPart()) + (C1.getImaginaryPart() * C1.getImaginaryPart())));
	double Im = (((this->b * C1.getRealPart()) - (this->a * C1.getImaginaryPart())) / ((C1.getRealPart() * C1.getRealPart()) + (C1.getImaginaryPart() * C1.getImaginaryPart())));
	return Complex(Re, Im);
}

double Complex::abs() const
{
	return (sqrt((this->a * this->a) + (this->b * this->b)));
}

std::string Complex::toString() const
{
	std::stringstream ntostr;
	ntostr << setprecision(4) << this->a;
	ntostr << " + ";
	ntostr << setprecision(4) << this->b;
	ntostr << "i";

	return ntostr.str();
}

Complex& Complex::operator+=(const Complex& C1)
{
	*this = add(C1);
	return *this;
}

Complex& Complex::operator-=(const Complex& C1)
{
	*this = subtract(C1);
	return *this;
}

Complex& Complex::operator*=(const Complex& C1)
{
	*this = multiply(C1);
	return *this;
}

Complex& Complex::operator/=(const Complex& C1)
{
	*this = divide(C1);
	return *this;
}

string Complex::operator[](int x)
{
	stringstream n;
	if (x == 0)
	{
		n << this->a;
	}
	else if (x == 1)
	{
		n << this->a;
		n << "i";
	}
	return n.str();

}

Complex& Complex::operator++()
{
	this->a++;
	return *this;
}

Complex& Complex::operator--()
{
	this->a--;
	return *this;
}

Complex Complex::operator++(int x)
{
	Complex temp(a,b);
	this->a++;
	return temp;
}

Complex Complex::operator--(int x)
{
	Complex temp(a,b);
	this->a--;
	return temp;
}

Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-a, -b);
}

ostream& operator<<(ostream& os, const Complex& n)
{
	os << n.a;
	os << " + ";
	os << n.a;
	os << "i";
	return os;
}

istream& operator>>(istream& is, Complex& n)
{
	cout << "Enter the real part: ";
	is >> n.a;

	cout << "Enter the imaginary part: ";
	is >> n.b;
	return is;
}

Complex operator+(const Complex& C1, const Complex& C2)
{
	return C1.add(C2);
}

Complex operator-(const Complex& C1, const Complex& C2)
{
	return C1.subtract(C2);
}

Complex operator*(const Complex& C1, const Complex& C2)
{
	return C1.multiply(C2);

}

Complex operator/(const Complex& C1, const Complex& C2)
{
	return C1.divide(C2);
}