#include <iostream>
using namespace std;

void getPrimes(int amoPrimesWanted) {
	int testNum = 2;
	int amoPrimesGot = 0;
	while (amoPrimesGot < amoPrimesWanted) {
		bool isPrime = true;
		for (int k = 2; k < testNum; k++) {
			if (testNum%k == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) {
			cout << testNum << endl;	
			amoPrimesGot++;
		}
		testNum++;
	}
}

int main() {
	int amoPrimesWanted;
	cout << "How many primes do you want?" << endl;
	cin >> amoPrimesWanted;
	getPrimes(amoPrimesWanted);
}
