//////////////////////Number.h
#pragma once
#include <iostream>
#include <string>
#include "Exception.h"
using namespace std;
class Number
{
	int first; 
	unsigned int second;
public :
	Number(int first = 0, unsigned int second = 0);
	Number(const Number& n);
	~Number() {}
	int getfirst() const { return first; }
	unsigned int getsecond() const { return second; }
	void setfirst(int first) { this->first = first; }
	void setsecond(unsigned int second) { this->second = second; }

	operator string() const;
	Number& operator++();
	Number operator++(int);
	Number& operator--();
	Number operator--(int);
	Number& operator=(const Number& n);
	
	friend ostream& operator<<(ostream& os, const Number& n);
	friend istream& operator>>(istream& is, Number& n);
	
	double multiply();
};

