#ifndef KONF_MED_CPP
#define KONF_MED_CPP

#include "Medium.h"
#include <iostream>

using namespace std;

int Medium::i = 0;

Medium::Medium(string titel, int jahr) : id{i++}, titel(titel), jahr(jahr){
}

Medium::~Medium(){}

int Medium::alter(){
   return 2021 - jahr; 
}

void Medium::setTitel(string titel){
    Medium::titel = titel;
}

void Medium::setJahr(int jahr){
    Medium::jahr = jahr;
}

void Medium::druckeDaten(){}

#endif