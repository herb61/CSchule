/*
 * ausgabe.cpp
 *
 *  Created on: Apr 28, 2015
 *      Author: schueler
 */

// Artikeldaten einlesen und formatiert ausgeben.
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/*! check input
*
*/
int checkInt(){
    int tmp;
     cin  >> tmp;
    while(cin.fail()){
    cin.clear();
    cin.ignore(80, '\n');
    cout << "Falsche Eingabe:";
    cin  >> tmp;
    }
    return tmp;
}

double checkdouble(){
    double tmp;
    cin  >> tmp;
    while(cin.fail()){
    cin.clear();
    cin.ignore(80, '\n');
    cout << "Falsche Eingabe:";
    cin  >> tmp;
    }
return tmp;
}

struct artikel{
int nummer;
int anzahl;
double preis;
string name;
};

//main
int main()
{
    /*long   nummer = 0;
    int    anzahl = 0;
    double preis  = 0.0;
    string name = "";
       */
       int num;
    artikel art[5];
    cout << "Wie viele Artikel möchten Sie eingeben?"<<endl;
    cin >> num;
    for(int i = 0; i < num; i++){

    // Eingabe:
    cout << "\nBitte Artikeldaten Nr: " << i+1 << " eingeben.\n";

    cout << "Artikelnummer:\t";

    art[i].nummer = checkInt();

    cout << "Artikelname:\t";
    cin  >> art[i].name;

    cout << "Stueckzahl:\t";

    art[i].anzahl = checkInt();
    cout << "Stueckpreis:\t";
    art[i].preis = checkdouble();

    }
    // Ausgabe:

    cout    << setprecision(16)<< setw(16)<<setiosflags(ios::right)<<"Artikelnummer:" << setw(16)<<"Artikelname:"
            << setw(16)<< "Stueckzahl:" << setw(16) <<"Stueckpreis:\n";
    for(int i = 0; i < num; i++){
    cout  << resetiosflags(ios::right)
          << setprecision(16)<< setiosflags(ios::right)
         << setw(16)  << art[i].nummer
         << setw(16) << art[i].name
         << setw(16) << art[i].anzahl
         << fixed << setprecision(2)
         << setw(11) << art[i].preis << " EURO" << endl;
    }
    return 0;
}



