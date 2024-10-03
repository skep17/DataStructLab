#include <iostream>
#include <string>
#include <fstream>
#include "ComplexNum.h"

using namespace std;
int main() {
	ComplexNum cn;
	ComplexNum cn2(1, 1);
	ComplexNum cn3;

	ofstream ostr("out.txt");
	ifstream istr("in.txt");

	ostr << cn;
	istr >> cn3;

	cout << cn3 << endl;

	ostr << cn3;

	cn.setNum(4, 6);

	cout << ++cn << endl;
	cout << cn << endl;

	cn++;
	cout << cn << endl;

	if (cn < cn2) cout << "great!" << endl;

	if (cn == cn2) cn2--;

	--cn;

	return 0;
}



