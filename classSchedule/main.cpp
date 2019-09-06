#include <iostream>

using namespace std;
 
//Constant strings for classes
	const string math = "8:00	College Alg. & Trig 127";
	const string span = "9:00	Elementary Spanish 1 141";
	const string cpp = "12:40	C++ 162";
	const string cpp2 = "12:40	C++ 162";
	const string cphy = "1:50	Classical Physics 1 212";
	const string m = "Monday		";
	const string t = "Tuesday		";
	const string w = "Wednesday	";
	const string th = "Thursday	";
	const string f = "Friday		";

//Functions to list each day of the week
int print() {
	cout <<m << math << endl << m << span << endl << m << cpp << endl << m << cphy << endl;
	return 0;

}

int main() {
	/*
	math();
	span();
	cpp();
	cpp2();
	cphy();
	cout << "BREAK" << endl;
	*/
	cout << m << math << endl << m << span << endl << m << cpp << endl << m << cphy << endl;
	cout << t << math << endl << t << span << endl << t << cpp << endl << t << cphy << endl;
	cout << w << math << endl << w << span << endl << w << cpp << endl << w << cphy << endl;
	cout << th << math << endl << th << span << endl << th << cpp2 << endl << th << cphy << endl;
	cout << f << math << endl << f << span << endl << f << cpp << endl << f << cphy << endl;

	return 0;
}