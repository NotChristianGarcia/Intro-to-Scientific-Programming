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
				if (isPrime()){
					numberOfPrimesFound++;
					lastNumberTested = testNumber;
					return(testNumber);
				} else {
					testNumber++;
				}
			}
		};
		bool isPrime(){
			for (int k = 2; k < testNumber; k++) {
				if (testNumber%k == 0) {
					return (false);
				}
			}
			return (true);
		};
		int lastNumberTestedReturn(){return(lastNumberTested);};
		int numberFound(){return(numberOfPrimesFound);};
};

int main() {
	int nprimes;
	cout << "How many primes do you want?" << endl;
	cin >> nprimes;
	primeSequence sequence;
	while (sequence.numberFound() < nprimes) {
		int number = sequence.nextPrime();
		cout << "Number " << number << " is prime." << endl;
	}	
class LinearFunction{
	private:
		float vx, vy;
	public:
		LinearFunction(Point inputP1, Point inputP2){

		};
};
}
