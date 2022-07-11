#include "Bild.h"
#include <iostream>

using namespace std;

Bild::Bild(string titel, int jahr, std::string ort) : Medium(titel, jahr), ort(ort) {
}

void Bild::druckeDaten(){
    cout << "ID = " << getID() 
    << " \"" << getTitel() << "\" aufgenommen im Jahr " << getJahr() 
    << " in " << getOrt() << " \n";
}