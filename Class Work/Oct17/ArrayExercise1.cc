#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int maxNumber;
	int numbers[] = {1,-4,2,-6,5};
	for(int i=0; i<5;i++){
		int testNumber = fabs(numbers[i]);
		if (testNumber > maxNumber){
			maxNumber = testNumber;
		}
	}
	cout << maxNumber << endl;
}
