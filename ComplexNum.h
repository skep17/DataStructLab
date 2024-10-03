#pragma once
#include <iostream>

using namespace std;
class ComplexNum
{
private:
	int real;
	int imaginary;

public:
	ComplexNum();
	ComplexNum(int real, int imaginary);
	int getReal() const;
	int getImaginary() const;
	void setNum(int real, int imaginary);

	void display(ostream& o);
	void read(istream& i);

	ComplexNum& operator++();
	ComplexNum operator++(int);

	ComplexNum& operator--();
	ComplexNum operator--(int);

	bool operator==(ComplexNum& other);
};

bool operator<(ComplexNum& cur, ComplexNum& other);
ostream& operator<<(ostream& o, ComplexNum& c);
istream& operator>>(istream& i, ComplexNum& c);

