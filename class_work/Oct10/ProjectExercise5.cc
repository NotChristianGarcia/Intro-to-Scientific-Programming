#include <iostream>
using namespace std;

class primeSequence{
	private:
		int numberOfPrimesFound;
		int lastNumberTested;
		int testNumber;
	public:
		primeSequence(){numberOfPrimesFound = 0; lastNumberTested = 1;};
		int nextPrime(){
			testNumber = lastNumberTested+1;
			while(true){
				if (isPrime(testNumber)){
					numberOfPrimesFound++;
					lastNumberTested = testNumber;
					return(testNumber);
				} else {
					testNumber++;
				}
			}
		};
		bool isPrime(int testNumber){
			for (int k = 2; k < testNumber; k++) {
				if (testNumber%k == 0) {
					return (false);
				}
			}
			return (true);
		};
		int lastNumberTestedReturn(){return(lastNumberTested);};
};


int main() {
	int lastE;
	cout << "To what E do you want to go to?" << endl;
	cin >> lastE;
	for (int e = 4; e <= lastE; e += 2){
		bool noMatch = true;
		primeSequence sequence;
		while (noMatch) {
			int p = sequence.nextPrime();
			if (sequence.isPrime(e-p)){
				cout << e << " = " << p << " + " << (e-p) << endl;
				noMatch = false;
			}
		}
	}
}
