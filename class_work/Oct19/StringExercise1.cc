#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

string numToStr(int number) {
	string numStr;
	vector<string> numConversion{"zero","one","two","three","four","five","six","seven","eight","nine"};
	numStr = numConversion[number];
	return numStr;
}

int main(){
	int inputedNumber;
	cout << "Give me a number please." << endl;
	cin >> inputedNumber;
	int inputLength = log10(inputedNumber)+1;
	for (int i=0;i<inputLength;i++){
		int firstDigit = inputedNumber/pow(10,(inputLength-1-i));
		cout << numToStr(firstDigit) << " ";
		inputedNumber = inputedNumber - firstDigit * pow(10,(inputLength-1-i));
	}
	cout << endl;
}
