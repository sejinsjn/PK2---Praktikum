#include <iostream>
#include <iomanip>
#include "Bild.h"
#include "Audio.h"

int main(){
    Medium *medium[] = {new Audio("It Means Nothing", 2007, "Stereophonics", 229), new Bild("Gebaeude FB Informatik", 2020, "Dortmund")};
    medium[0]->druckeDaten();
    medium[1]->druckeDaten();
}