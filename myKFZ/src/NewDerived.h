/*
 * NewDerived.h
 *
 *  Created on: May 8, 2015
 *      Author: schueler
 */

#ifndef NEWDERIVED_H_
#define NEWDERIVED_H_

#include "KFZ.h"

class NewDerived: public KFZ {
private:
	int tank;
	string motor;
	double test;
	char* bash;
public:
	NewDerived();
	virtual ~NewDerived();
};

#endif /* NEWDERIVED_H_ */
