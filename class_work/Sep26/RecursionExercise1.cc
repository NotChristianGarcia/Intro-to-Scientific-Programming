#include <iostream>
using namespace std;

int recursiveBoi(int n) {
	int S;
	if(n==1){
		S = 1;
	}
	else {
		S = n*n + recursiveBoi(n-1);
	}
	return S;
}

int main() {
	int n = 100;
	cout << recursiveBoi(n) << endl;
}
