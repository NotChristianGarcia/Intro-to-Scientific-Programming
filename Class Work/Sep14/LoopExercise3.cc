#include <iostream>
using namespace std;

int main() {
	int endNumber;
	cout << "Give me a number." << endl;
	cin >> endNumber;
	for (int i = 1; i<=endNumber; i++) {
		cout << i << " | ";
		for (int j = 1; j <=i; j++) {
			cout << " " << j;
		}
		cout << endl;
	}
}
