#ifndef KONF_AUD
#define KONF_AUD

#include <string>
#include "Medium.h"

class Audio : public Medium{
    std::string interpret;
    int dauer;
public:
    Audio(std::string titel, int jahr, std::string interpret, int dauer);
    void druckeDaten() override;
    void setInterpret(std::string interpret);
    void setDauer(int dauer);
    std::string getInterpret(){ return interpret; }
    int getDauer(){ return dauer; }
};

#include "Audio.cpp"

#endif