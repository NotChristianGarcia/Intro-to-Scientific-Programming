#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int maxNumber;
	int numbers[] = {1,-4,2,-6,5};
	for(auto v: numbers){
		if (fabs(v) > maxNumber){
			maxNumber = fabs(v);
		}
	}
	cout << maxNumber << endl;
}
