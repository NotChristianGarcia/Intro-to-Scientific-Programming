#include "FinalHead.h"

int main(){
	int nPeople; //Calls for population size and creates a class with a vector of people
	float perTransfer; //Transfers the % chance to transfer the disease to the population class
	
	cout << "Size of Population? ";
	cin >> nPeople;
	cout << "Percent Chance to Transfer Disease: ";
	cin >> perTransfer;
	Population population(nPeople,perTransfer);

	srand(time(NULL)); //Creates a quasi-random seed for rand to use	
	population.runSim(1);
}
