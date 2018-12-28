#include <iostream>
using namespace std;

class Point{
private:
	float x,y;
public:
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
protected:
	Point bl;
	Point tr;
public:
	Rectangle(){};
	Rectangle(Point firstPoint, Point secondPoint){bl = firstPoint; tr = secondPoint;};
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

class Square : public Rectangle {
public:
	Square(Point firstPoint, Point secondPoint){bl = firstPoint; tr = secondPoint;};
};
 
main() {
	Point origin(0.,0.);
	Point secondbit(2.,2.);
	Square tallskinny(origin,secondbit);
	cout << tallskinny.area() << endl;
}


