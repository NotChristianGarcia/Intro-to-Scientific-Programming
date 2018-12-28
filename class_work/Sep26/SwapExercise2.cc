#include <iostream>
#include <cmath>
using namespace std;

int xyRotation(int &x,int &y,int theta) {
	x = x*cos(theta) - y*sin(theta);
	y = x*sin(theta) + y*cos(theta);
}

int main() {
	int x;
	int y;
	int theta;
	cout << "Give me a x." << endl;
	cin >> x;
	cout << "Give me a y." << endl;
	cin >> y;
	cout << "Give me a theta." << endl;
	cin >> theta;
	xyRotation(x,y,theta);
	cout << "New coordinates are (" << x << "," << y << ")." << endl;
}
