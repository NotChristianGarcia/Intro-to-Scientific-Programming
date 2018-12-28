#include <iostream>
using namespace std;

int swap(int &i,int &j) {
	int k = i;
	i = j;
	j = k;
}

int main() {
	int i;
	int j;
	cout << "Give me an i." << endl;
	cin >> i;
	cout << "Give me a j." << endl;
	cin >> j;
	swap(i,j);
	cout << "The swapped coordinates are ("<< i << "," << j << ")." << endl;
}
