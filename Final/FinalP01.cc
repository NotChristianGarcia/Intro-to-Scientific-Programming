#include "FinalHead.h"
int main(){
	Person joe;
	int obsolete = 0;
	for(int step = 0;;step++){
		joe.update(obsolete,obsolete);
		float badLuck = (float) rand()/(float)RAND_MAX;
		if (badLuck > .95){joe.infect(5,obsolete,obsolete);}
		cout << "On day " << setw(2) << step << ", Joe is " << joe.statusString(true) << endl;
		if (joe.statusString() == " - "){break;}
	}

}
