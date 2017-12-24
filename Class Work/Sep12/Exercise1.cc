#include <iostream>
using namespace std;

int main() {
	int readNumber;
	cout << "Type a number:" << endl;
	cin >> readNumber;
	if(readNumber%3 == 0) {
	cout << "Fizz";
	}
	if(readNumber%5 == 0) {
	cout << "Buzz";
	}
	cout << "!" << endl;
	return 0;
}
