//============================================================================
// Name        : myKFZ.cpp
// Author      : Herbert
// Version     :
// Copyright   : Demo KFZ
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"KFZ.h"
using namespace std;

int main() {
	cout << "Eine Klasse für ein KFZ" << endl; // prints Eine Klasse für ein KFZ
	KFZ *k = new KFZ;
	k->setNumber("Mein neues Auto");
	cout << "Name meines Autos: " << k->getNumber()<< endl;
	cout << "Zurzeit gibt es "<< k->getNumOfObjects() << " KFZ-Objekte" <<endl;
	KFZ *k1 = new KFZ;
	cout << "Zurzeit gibt es "<< k->getNumOfObjects() << " KFZ-Objekte" <<endl;
	delete k1;
	cout << "Zurzeit gibt es "<< k->getNumOfObjects() << " KFZ-Objekte" <<endl;

	return 0;
}
