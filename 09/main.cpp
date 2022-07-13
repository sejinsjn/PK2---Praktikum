#include <iostream>
#include <iomanip>
#include "linkedlist.h"
#include "Medien/Audio.h"
#include "Medien/Bild.h"
#include "Medien/Medium.h"


using namespace std;
using namespace fhdo_pk2;

LinkedList<Medium> liste;

template <typename T> void printContent(T content) {
  cout << content << endl;
}

template <> void printContent(Medium* medium) {
  medium->druckeDaten();
}

template <typename T> void remove(T content) {}

template <> void remove(Medium* medium) {
    liste.remove((liste.index_of(medium)));
}

int main(){
    liste.append(new Audio{"It Means Nothing", 2007, "Stereophonics", 229});
    liste.insert(new Bild{"Gebaeude FB Informatik", 2020, "Dortmund"}, 1);
    cout << "Liste:" << endl;
    liste.visit_all(printContent);

    liste.remove(2);
    cout << "Liste:" << endl;
    liste.visit_all(printContent);

    liste.visit_all(remove);
    cout << "Liste:" << endl;
    liste.visit_all(printContent);

    liste.insert(new Audio{"It Means Nothing", 2007, "Stereophonics", 229}, 0);
    liste.append(new Bild{"Gebaeude FB Informatik", 2020, "Dortmund"});
    cout << "Liste:" << endl;
    liste.visit_all(printContent);

    return 0;
}