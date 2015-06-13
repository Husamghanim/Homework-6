#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Complex{
public:
	Complex();
	Complex(double);
	Complex(double, double);
	double getRealPart() const;
	double getImaginaryPart() const;
	Complex add(const Complex&) const;
	Complex subtract(const Complex&) const;
	Complex multiply(const Complex&) const;
	Complex divide(const Complex&) const;
	double abs() const;
	string toString() const;
	Complex& operator+=(const Complex&);
	Complex& operator-=(const Complex&);
	Complex& operator*=(const Complex&);
	Complex& operator/=(const Complex&);
	string operator[](int);
	Complex& operator++();
	Complex& operator--();
	Complex operator++(int);
	Complex operator--(int);
	Complex operator+();
	Complex operator-();
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);

private:
	double a;
	double b;

};

Complex operator+(const Complex& C1, const Complex& C2);
Complex operator-(const Complex& C1, const Complex& C2);
Complex operator*(const Complex& C1, const Complex& C2);
Complex operator/(const Complex& C1, const Complex& C2);
#endif