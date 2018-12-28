#include <iostream>
#include <cmath>
using namespace std;

class Point{
	private:
		float vx, vy;
	public:
		Point (float xcoordinate, float ycoordinate){
			vx = xcoordinate; vy = ycoordinate;
		};
		float distToOrigin() {
			return (sqrt(vx*vx + vy*vy));
		};
		void printOut() {
			cout << "(" << vx << "," << vy << ")" << endl;
		};
		float distance(Point q) {
			return (sqrt((q.vx - vx)*(q.vx - vx) + (q.vy - vy)*(q.vy - vy)));	
		};
		float angle() {
			return (floor((180/3.1415)*(atan(vy/vx))));
		};
};

int main() {
	Point p(1,1);
	Point q(1,2);
	cout << "Distance to origin: " << p.distToOrigin() << endl;
	cout << "Point P is: ";
	p.printOut();
	cout << "Distance from P to Q is: " << p.distance(q) << endl;
	cout << "Angle from X-Axis to P: " << p.angle() << endl;
}

