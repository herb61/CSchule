/*
 * KFZ.h
 *
 *  Created on: May 8, 2015
 *      Author: schueler
 */
#include <string>
#ifndef KFZ_H_
#define KFZ_H_

using namespace std;

class KFZ {
/** Attribute der Klasse
 *
 * @param number --> registration number
 * @param wheels --> number of wheels
 */
private:
	static int numOfObjects;
	string number; ;
	int wheels;
	string color;
	int seat;

public:
	KFZ();
	string getColor() const;
	void setColor(const string& color);
	string getNumber() const;
	void setNumber(const string& number);
	int getSeat() const;
	void setSeat(int seat);
	int getWheels() const;
	void setWheels(int wheels);
	int getNumOfObjects();
	/** virtual only for derived classes
	 *
	 * virtual ist nur für Abgeleitete Klassen nötig
	 */
	virtual ~KFZ();
};



#endif /* KFZ_H_ */
