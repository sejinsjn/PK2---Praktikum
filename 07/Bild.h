#ifndef KONF_MED
#define KONF_MED

#include <string>
#include "Medium.h"

#endif

class Bild : public Medium{
    std::string ort;
public:
    Bild(std::string titel, int jahr, std::string ort);
    void druckeDaten() override;
    void setOrt(std::string ort);
    std::string getOrt(){ return ort; }
};