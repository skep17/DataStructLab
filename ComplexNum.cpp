#include "ComplexNum.h"


ComplexNum::ComplexNum() {
	this->real = 0;
	this->imaginary = 0;
}
ComplexNum::ComplexNum(int real, int imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}
int ComplexNum::getReal() const {
	return real;
}
int ComplexNum::getImaginary() const {
	return imaginary;
}
void ComplexNum::setNum(int real, int imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}

void ComplexNum::display(ostream& o) {
	o << real << " + " << imaginary << "i" << endl;
}
void ComplexNum::read(istream& i) {
	i >> real >> imaginary;
}

ComplexNum& ComplexNum::operator++() {
	real++;
	imaginary++;
	return *this;
}
ComplexNum ComplexNum::operator++(int) {
	ComplexNum temp = *this;
	real++;
	imaginary++;
	return temp;
}

ComplexNum& ComplexNum::operator--() {
	real--;
	imaginary--;
	return *this;
}
ComplexNum ComplexNum::operator--(int) {
	ComplexNum temp = *this;

	real--;
	imaginary--;

	return temp;
}

bool ComplexNum::operator==(ComplexNum& other) {
	return this->real == other.real && this->imaginary == other.imaginary;
}

bool operator<(ComplexNum& cur, ComplexNum& other) {
	return cur.getReal() < other.getReal() && cur.getImaginary()< other.getImaginary();
}
ostream& operator<<(ostream& o, ComplexNum& c) {
	c.display(o);
	return o;
}
istream& operator>>(istream& i, ComplexNum& c) {
	c.read(i);
	return i;
}