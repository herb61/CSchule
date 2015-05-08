/*
 * KFZ.cpp
 *
 *  Created on: May 8, 2015
 *      Author: schueler
 */

#include "KFZ.h"
#include <string>

using namespace std;

int KFZ::numOfObjects = 0;
/** wheels and seat set to zero
 *
 * no more description
 */
KFZ::KFZ() {
	wheels = seat = 0;
	this->numOfObjects++;
}

KFZ::~KFZ() {
	this->numOfObjects--;
}
/** only getter and setter
 *
 */
string KFZ::getColor() const {
	return color;
}

void KFZ::setColor(const string& color) {
	this->color = color;
}

string KFZ::getNumber() const {
	return number;
}

int KFZ::getNumOfObjects(){
	return this->numOfObjects;
}

void KFZ::setNumber(const string& number) {
	this->number = number;
}

int KFZ::getSeat() const {
	return seat;
}

void KFZ::setSeat(int seat) {
	this->seat = seat;
}

int KFZ::getWheels() const {
	return wheels;
}

void KFZ::setWheels(int wheels) {
	this->wheels = wheels;
}
