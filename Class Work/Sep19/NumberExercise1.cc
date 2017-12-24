#include <iostream>
using namespace std;

int main() {
	int oldMaximumSequence;
	for (int number = 1; number < 1000; number++) {
		int testNumber = number;
		int maximumTestSequence = 0;
		while (testNumber != 1) {
			if (testNumber%2==0) {
				testNumber = testNumber/2;
			} else {
				testNumber = testNumber*3 + 1;
			}
			maximumTestSequence++;
		}
		if (maximumTestSequence > oldMaximumSequence) {
			oldMaximumSequence = maximumTestSequence;
			cout << "New max sequence length set by N = " << number << " with sequence length of " << maximumTestSequence << endl;
		}
	}
}
