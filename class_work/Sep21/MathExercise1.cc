#include <iostream>
#include <cmath>
using namespace std;

float distanceFunc (int x, int y) {
	float originDist = sqrt((x*x) + (y*y));
	return originDist;
}

int askForStuff(char whatYouWant) {
	int whatYouGot;
	cout << "Type the " << whatYouWant << " value." << endl;
	cin >> whatYouGot;
	return whatYouGot;
}

void main() {
	char X;
	char Y;
	int distanceFromOrigin;
	distanceFromOrigin = distanceFunc(askForStuff('X'),askForStuff('Y'));
	cout << "Distance from origin is " << distanceFromOrigin << "." << endl;
}
