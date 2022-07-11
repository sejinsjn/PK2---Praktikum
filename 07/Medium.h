#include <string>

class Medium{   
    static int i;
    const int id;
    std::string titel;
    int jahr;
public:
    Medium(std::string titel, int jahr);
    virtual ~Medium();
    int alter();
    virtual void druckeDaten();
    void setTitel(std::string titel);
    void setJahr(int jahr);
    int getID(){ return id; }
    std::string getTitel(){ return titel; }
    int getJahr(){ return jahr; }
};