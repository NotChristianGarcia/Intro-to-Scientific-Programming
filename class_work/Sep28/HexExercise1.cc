#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Base 16:" << endl;
	cout << setbase(16) << setfill(' ');
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			cout << right << setfill('0') << setw(2) << i*16+j << " ";
		}
		cout << endl;
	}
}
