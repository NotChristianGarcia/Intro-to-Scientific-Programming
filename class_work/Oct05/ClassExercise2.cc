#include <iostream>
#include <cmath>
using namespace std;

class Point{
	private:
		float x, y;
	public:
		Point(float xcoor, float ycoor){
			x = xcoor; y = ycoor
		};
		float getX() {return(x)};
		float getY() {return(y)};
};

class LinearFunction{
	private:
		float yIntercept, slope;
	public:
		LinearFunction(Point inputP1, Point inputP2){
				slope = (inputP2.y - inputP1.y)/(inputP2.x - inputP2.x);
				yIntercept = slope*inputP1.x +
		};
		evaluateAt(int evalX){return(slope*evalX+yintercept)};
};

int main() {
	LinearFunction line(p1,p2);
	cout << "Value at 4.0: " << line.evaluateAt(4.0) << endl;
}
