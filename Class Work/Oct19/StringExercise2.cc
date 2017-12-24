#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<string> regular{"errorReg","one","two","three","four","five","six","seven","eight","nine"};
vector<string> teens{"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
vector<string> tens{"errorTens","one","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
vector<string> lrgNums{"","thousand","million","billion","trillion","quadrillion","quintillion","sextillion",
	"septillion","octillion","nonillion","decillion","undecillion","duodecillion","tredecillion","quattuordecillion",
	"quindecillion","sexdecillion","septendecillion","octodecillion","novemdecillion","vigintillion","centillion"};

int main(){
	long long int inputedNumber;
	cout << "Give me a number please." << endl;
	cin >> inputedNumber;
	bool teenUsed = false;
	bool andUsed = true;
	bool zerosOnly = true;
	int inputLength = log10(inputedNumber)+1;
	if (inputLength%3 != 0){inputLength = inputLength + (3- inputLength%3);}
	int largeNumbers = inputLength/3;
	for (int i=0;i<inputLength;i++){
		int firstDigit = inputedNumber/pow(10,(inputLength-1-i));
		int firstTwoDigits = inputedNumber/pow(10,(inputLength-2-i));
		if(i%3 == 0){ //hundreds
			if (firstDigit != 0){
				cout << regular[firstDigit] << " hundred ";
				andUsed = false;
				zerosOnly = false;
			}
		}
		if((i-1)%3 == 0){ //tens
			if (firstDigit == 1){ //teens
				if (andUsed == false){
					cout << "and ";
					andUsed = true;
				}
				cout << teens[firstTwoDigits-10] << " ";
				teenUsed = true;
				zerosOnly = false;
			} else if (firstDigit != 0){
				if (andUsed == false){
					cout << "and ";
					andUsed = true;
				}
				cout << tens[firstDigit] << " ";
				zerosOnly = false;
			}
		}
		if((i-2)%3 == 0){ //ones
			if (teenUsed == false and firstDigit !=0){
				if (andUsed == false){
					cout << "and ";
					andUsed = true;
				}
				cout << regular[firstDigit] << " ";
				zerosOnly = false;
			}
			if (zerosOnly == false){
				cout << lrgNums[largeNumbers-1] << " "; //calling large number modifiers
			}
			largeNumbers--;
			teenUsed = false;
			zerosOnly = true;
			
		}
		inputedNumber = inputedNumber - firstDigit * pow(10,(inputLength-1-i));
	
	}
	cout << endl;
}
