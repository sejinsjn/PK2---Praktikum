#include <iostream>
#include <iomanip>
#include "linkedlist.h"

void ausgabe(const char* text){
    std::cout << text << std::endl;
}

int main(){
    using namespace std;
    using namespace fhdo_pk2;

    LinkedList<char> liste;
    liste.append("Element 1");
    liste.insert("Element 2", 2);

    LinkedList<char> liste2 = liste;
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    liste.remove(2);
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    cout << "Liste2:" << endl;
    liste2.visit_all(ausgabe);

    return 0;
}