#include <iostream>
using namespace std;

bool isprime(int askedNumber) {
	bool isprime = true;
	for (int k=2 ; k < askedNumber; k++){
		if (askedNumber%k == 0) {
			isprime = false;
			break;
		}
	}
	return isprime;
}

int askNumberFunction () {
	int askedNumber;
	cout << "Give me a number." << endl;
	cin >> askedNumber;
	return askedNumber;
}

int main() {
	int askedNumber;
	askedNumber = askNumberFunction();
	cout << askedNumber << " is prime: " << std::boolalpha << isprime(askedNumber) << endl;
}
