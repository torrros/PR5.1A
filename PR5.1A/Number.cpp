//////////////////////Number.cpp
#include "Number.h"
#include "Exception.h"
#include <iostream>
#include <sstream>
#include <exception>

using namespace std;

Number::Number(int f, unsigned int s)
{
	first = f;
	if (s < 1000)
		second = s;
	else
		throw Exception("Second is too big");
}

Number :: Number(const Number& n)
{
	* this = n;
}

double Number::multiply()
{	
	return first * second;
}

Number:: operator string () const
{
	stringstream ss;	
	ss << first << "." << second;
	return ss.str();
}

Number& Number::operator ++()
{
	++first;
	return *this;
}

Number Number::operator ++(int)
{
	Number temp = *this;
	++first;
	return temp;
}

Number& Number::operator -- ()
{
	--first;
	return *this;
}

Number Number::operator --(int)
{
	Number temp = *this;
	--first;
	return temp;
}

Number& Number::operator = (const Number& n)
{
	first = n.first;
	second = n.second;
	return *this;
}

ostream& operator << (ostream& os, const Number& n)
{
	os << n.first << "." << n.second;
	return os;
}

istream& operator >> (istream& is, Number& n)
{
	cout << "Enter first - ";is >> n.first;
	cout << "Enter second - ";is >> n.second;
	if  (n.second > 1000)
		throw Exception("Second is too big");
	return is;
}