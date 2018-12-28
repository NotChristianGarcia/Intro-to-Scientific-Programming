#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Give me a number." << endl;
	cin >> N;
	for (int i = 0; i<=10; i++) {
		for (int j = 0; j <=10; j++) {
			if (i*j > N) {
				cout << i << "," << j << endl;
				goto label1;
			}
		}
	}
label1:
	for (int k = 0; k <= 18; k++) {
		for (int i = 0; i<=10; i++) {
			int j = k-i;
			if (i*j > N) {
				cout << i << ","<< j << endl;
				goto label2;
			}
		}
	}
label2:
	return 0;
}
