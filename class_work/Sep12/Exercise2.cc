#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Type a number!" << endl;
	cin >> number;
	if(number%3 == 0 && number%5 == 0) {
	cout << "Fizzbuzz!" << endl;
	}
	else if(number%3 == 0){
		cout << "Fizz!" << endl;
	}
	else if(number%5 == 0){
		cout << "Buzz!" << endl;
	}
}
