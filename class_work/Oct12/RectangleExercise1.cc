#include <iostream>
using namespace std;

class Point{
public:
	float x,y;
	Point(){};
	Point(float ux, float uy){x=ux;y=uy;};
	int printx(){
		return(x);
	};
	int printy(){
		return(y);
	};
};
class Rectangle{
public:
	Point bl;
	Point tr;
	Rectangle(Point firstPoint, Point secondPoint){
		bl = firstPoint;
		tr = secondPoint;
	};
	Rectangle(Point firstPoint, float w, float h){
		bl = firstPoint;
		Point temp(bl.printx() + w, bl.printy() + h);
		tr = temp;
	};
	float width(){
		return(tr.printx()-bl.printx());	
	};
	float height(){
		return(tr.printy()-bl.printy());
	};
	float area(){
		return((tr.printx()-bl.printx())*(tr.printy()-bl.printy()));
	};
};
 
main() {
	Point origin(0.,0.);
	Rectangle tallskinny(origin, 1., 27);
	cout << tallskinny.area() << endl;
}


