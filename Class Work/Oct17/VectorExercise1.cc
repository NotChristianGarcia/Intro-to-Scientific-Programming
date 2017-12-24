#include <iostream>
#include <vector>
#include <random>
using namespace std;

vector<float> random_floats(int length){
	vector<float> random_vector(length);
	for (int i = 0; i < length; i++){
		random_vector[i] = 1.*rand()/10;
		cout << random_vector[i] << endl;
	}
	return random_vector;
}

int main(){
	int length = 99;
	vector<float> values = random_floats(length);
}

