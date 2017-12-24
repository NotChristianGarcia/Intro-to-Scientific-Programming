#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <vector>
#include <iomanip>
#include <math.h>
#include <fstream>
using namespace std;

class Person{
private:
	int healthStatus;
	int peopleInfected;
	int peopleSusceptible;
	int peopleRecovered;
	int peopleInnoculated;
public:
	Person();
	string statusString(bool verboseString = false);
	int nPeopleInternal;
	void update(int& peopleRecovered,int& peopleInfected);
	void vaccinate(int& peopleInnoculated,int& peopleSusceptible);
	void infect(int n,int& peopleInfected,int& peopleSusceptible);
	bool isStable();		
};

class Population{
private:
	int nPeopleInternal;
	vector<Person> populents;
	float perVaccinatedInt;
	float probabilityOfTransfer;
	int peopleEncountered;
	int peopleInfected;
	int peopleSusceptible;
	int peopleRecovered;
	int peopleInnoculated;
public:
	Population(int nPeople,float probOfTransfer = 0.0,
			float perVaccinated = 0.0,int pEncountered = 0);
	void randomVaccinations();
	void randomInfection();
	void update();
	void populentsDisplay();
	void infectPeople(bool randomEncounters = false);
	void runSim(int caseN = 0);	
};
