#include "FinalHead.h"

int main(){
	int nPeople;
	
	cout << "Size of Population? ";
	cin >> nPeople;

	srand(time(NULL));
	Population population(nPeople);	
	population.runSim();
}
