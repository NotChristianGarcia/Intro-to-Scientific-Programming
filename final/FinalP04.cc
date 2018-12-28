#include "FinalHead.h"

int main(){
	int nPeople; //Calls for population size and creates a class with a vector of people
	float perVaccinated; //Transfer the % of people vaccinated to the population class	
	float perTransfer; //Transfers the % chance to transfer the disease to the population class
	
	cout << "Size of Population? ";
	cin >> nPeople;
	cout << "Percent of People Vaccinated: ";
	cin >> perVaccinated;
	cout << "Percent Chance to Transfer Disease: ";
	cin >> perTransfer;
	Population population(nPeople,perTransfer,perVaccinated);

	srand(time(NULL)); //Creates a quasi-random seed for rand to use
	population.runSim(1);
}
