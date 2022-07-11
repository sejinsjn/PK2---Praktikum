#include "Audio.h"
#include <iostream>

using namespace std;

Audio::Audio(string titel, int jahr, std::string interpret, int dauer) : Medium(titel, jahr), interpret(interpret), dauer(dauer) {
}

void Audio::druckeDaten(){
    cout << "ID = " << getID() 
    << " \"" << getTitel() << "\" von " << getInterpret()
    << " aus " << getJahr() 
    << " Spieldauer: " << getDauer() << " sek. \n" ;
}