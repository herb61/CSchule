//============================================================================
// Name        : hexzahlen.cpp
// Author      : Herbert
// Version     :
// Copyright   : Hexadezimal
// Description : Hello World in C++, Ansi-style
//editiert
//============================================================================

#include <iostream>
#include <iomanip>        // Für den Manipulator setw()
using namespace std;

int main()
{
   unsigned char zeichen = 0;
   unsigned int  code = 0;

   cout << "\nBitte dezimal einen Zeichencode eingeben: ";
   cin  >> code;

   zeichen = code;              // Für die Ausgabe des
                                // entsprechenden Zeichens

   cout << "\nDas zugehoerige Zeichen: " << zeichen << endl;

   code = zeichen;           // Zeichencode. Nur notwendig,
                             // falls Eingabe > 255 war.
   cout << "\nZeichencodes"
        << "\n  dezimal:     " << setw(3) << dec << code
        << "\n  oktal:       " << setw(3) << oct << code
        << "\n  hexadezimal: " << setw(3) << hex << code
        << endl;

   return 0;
}
