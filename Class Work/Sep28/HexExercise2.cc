#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	float one = 1.345;
	float two = 23.789;
	float three = 456.1234;	
	cout <<fmod(one,1) <<endl;
	cout << right << setfill(' ') << setw(4) << (int)(one) << "." << left << setfill(' ') << setw(4) << fmod(one,1) << endl;
	cout << right << setfill(' ') << setw(4) << floor(two) << "." << left << setfill(' ') << setw(4) << two - floor(two) << endl;
	cout << right << setfill(' ') << setw(4) << floor(three) << "." << left << setfill(' ') << setw(4) << three - floor(three) << endl;
}
