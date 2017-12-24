#include <iostream>
using namespace std;

struct vector {double x; double y;};

double innerProduct(struct vector v1, struct vector v2){
	double innerProductAns;
	innerProductAns = v1.x * v2.x + v1.y * v2.y;
	return innerProductAns;
}

int main(){
	double innerProductAns;
	struct vector v1,v2;
	v1.x = 1; v1.y = 1;
	v2.x = 2; v2.y = 2;
	innerProductAns = innerProduct(v1, v2);
	cout << innerProductAns << endl;
}
