#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Give me a number." << endl;
	cin >> number;
	for (int var=1; var<=number; var++) {
		cout << "Hello world " << var << "!" << endl;
	}
	return 0;
}
