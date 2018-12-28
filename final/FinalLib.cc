#include "FinalHead.h"

Person::Person(){
	healthStatus = 0;
};
string Person::statusString(bool verboseString){
	if(verboseString == false){
		if(healthStatus == 0){return " ? ";}
		else if(healthStatus == -1){return " - ";}
		else if(healthStatus == -2){return " x ";}
		else {return " + ";}
	}else{
		if(healthStatus == 0){return "susceptible.";}
		else if(healthStatus == -1){return "recovered.";}
		else if(healthStatus == -2){return "inocculated.";}
		else{
			ostringstream sickDaysString;
			sickDaysString << "sick (" << healthStatus << " to go)";		
			return sickDaysString.str();
		}
	}
};
void Person::update(int& peopleRecovered, int& peopleInfected){
	if(healthStatus > 1){
		healthStatus--;
	} else if(healthStatus == 1){
		healthStatus = -1;
		peopleRecovered++;
		peopleInfected--;
	}
};
void Person::vaccinate(int& peopleInnoculated,int& peopleSusceptible){
	healthStatus = -2;
	peopleInnoculated++;
	peopleSusceptible--;
};
void Person::infect(int n,int& peopleInfected,int& peopleSusceptible){
	if (healthStatus == 0){
	healthStatus = n;
	peopleInfected++;
	peopleSusceptible--;
	}
};

Population::Population(int nPeople,float probOfTransfer,float perVaccinated,int pEncountered){
	nPeopleInternal = nPeople;
	probabilityOfTransfer = probOfTransfer;
	perVaccinatedInt = perVaccinated;
	peopleEncountered = pEncountered;
	peopleInfected = 0;
	peopleSusceptible = nPeople;
	peopleRecovered = 0;
	peopleInnoculated = 0;
	populents = vector<Person>(nPeople);
};
void Population::randomVaccinations(){
	int numberVaccinated = nPeopleInternal * perVaccinatedInt;
	for (int p = 0; p < numberVaccinated;){
		int randPerson = rand()%nPeopleInternal;
		if (populents[randPerson].statusString() == " ? "){
			populents[randPerson].vaccinate(peopleInnoculated,peopleSusceptible);
			p++;
		}
	}
};
void Population::randomInfection(){
	if (perVaccinatedInt < 1){
		while (true){
			int randPerson = rand()%nPeopleInternal;
			if (populents[randPerson].statusString() == " ? "){
				populents[randPerson].infect(5,peopleInfected,peopleSusceptible);
				break;
			}
		}
	}
};
void Population::update(){
	for (int p = 0; p < nPeopleInternal; p++){
		populents[p].update(peopleRecovered,peopleInfected);
	}
};
void Population::populentsDisplay(){
	for (int p = 0; p < nPeopleInternal; p++){
		cout << populents[p].statusString();
	}
};
void Population:: infectPeople(bool randomEncounters){
	vector<Person> populentsCopy = populents;
	for (int p = 0; p < nPeopleInternal; p++){
		if (populentsCopy[p].statusString() == " + "){
			if (randomEncounters == true){
				for (int j = 0; j < peopleEncountered; j++){
					if ((float)rand()/(float)RAND_MAX < probabilityOfTransfer){
						populents[rand()%nPeopleInternal].infect(5,
								peopleInfected,peopleSusceptible);
					}
				}
			} else {
				if ((float)rand()/(float)RAND_MAX < probabilityOfTransfer){
					if (p-1 >= 0){
						populents[p-1].infect(5,peopleInfected,peopleSusceptible);
					}
				}	
				if ((float)rand()/(float)RAND_MAX < probabilityOfTransfer){
					if (p+1 <= nPeopleInternal-1){
						populents[p+1].infect(5,peopleInfected,peopleSusceptible);
					}
				}			
			}
		}
	}
};
void Population:: runSim(int caseN){
	int nPeopleLength = log10(nPeopleInternal)+2;
	bool infectionActive = true;
	int step = 1;
	randomVaccinations();
	randomInfection();
	if (nPeopleInternal > 25){
		cout << "Population is too large (P>25) for proper graphical display" << endl;
	}
	while(infectionActive){
		if (nPeopleInternal <= 25){
			cout << "In step " << setw(nPeopleLength) << step << " #sick: " 
				<< setw(nPeopleLength) << peopleInfected << ":";
			populentsDisplay();
			cout << endl;
		} else {
			cout << "In step " << setw(nPeopleLength) << step << "   #sick: " 
				<< setw(nPeopleLength) << peopleInfected << "   #susceptible: "
				<< setw(nPeopleLength) << peopleSusceptible << "   #recovered: "
				<< setw(nPeopleLength) << peopleRecovered << "   #innoculated: "
				<< peopleInnoculated << endl;
		}
		if (peopleInfected == 0){
			infectionActive = false;
		}
		update();
		if (caseN == 1) {
			infectPeople();
		} else if (caseN == 2) {
			infectPeople(true);
		}
		step++;
	}
};
