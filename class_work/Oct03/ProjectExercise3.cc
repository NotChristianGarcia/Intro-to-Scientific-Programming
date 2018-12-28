#include <iostream>
using namespace std;

struct primesequence {int number_of_primes_found;int last_number_tested;};

int nextprime(struct primesequence &sequence) {
	int testNum = sequence.last_number_tested+1;
	while (true) {
		bool isPrime = true;
		for (int k = 2; k < testNum; k++) {
			if (testNum%k == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) {
			sequence.number_of_primes_found = sequence.number_of_primes_found+1;
			sequence.last_number_tested = testNum;
			return testNum;
		}
		testNum++;
	}
}

int main() {
	int nprimes;
	cout << "How many primes do you want?" << endl;
	cin >> nprimes;
	struct primesequence sequence;
	sequence.number_of_primes_found = 0; sequence.last_number_tested = 1;
	while (sequence.number_of_primes_found < nprimes) {
		int number = nextprime(sequence);
		cout << "Number " << number << " is prime." << endl;
	}	
}
