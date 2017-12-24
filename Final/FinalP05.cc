#include "FinalHead.h"

int main(){
	int nPeople; //Calls for population size and creates a class with a vector of people
	float perVaccinated; //Transfers the % of people vaccinated to the population class
	float perTransfer; //Transfers the % chance to transfer the disease to the population class
	int pEncountered; //Sets the amount of people someone encounters per day in the pop. class

	cout << "Size of Population? ";
	cin >> nPeople;
	cout << "Percent of People Vaccinated: ";
	cin >> perVaccinated;
	cout << "Percent Chance to Transfer Disease: ";
	cin >> perTransfer;
	cout << "How Many People Should Others Encounter: ";
	cin >> pEncountered;
	Population population(nPeople,perTransfer,perVaccinated,pEncountered);

	srand(time(NULL)); //Creates a quasi-random seed for rand to use
	population.runSim(2);
}
