#ifndef KONF_BILD
#define KONF_BILD

#include <string>
#include "Medium.h"

class Bild : public Medium{
    std::string ort;
public:
    Bild(std::string titel, int jahr, std::string ort);
    void druckeDaten() override;
    void setOrt(std::string ort);
    std::string getOrt(){ return ort; }
};

#include "Bild.cpp"

#endif