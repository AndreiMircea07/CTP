

#ifndef BILETECTP_STATIE_H
#define BILETECTP_STATIE_H

#include <string>
#include <vector>

class Statie {
private:
    int nrCtr;
    std::string nume;
    std::vector<std::string> nrBus;
public:
    Statie();
    Statie(const Statie&);
    ~Statie();
    int getNrCtr();
    void setNrCtr(int);
    std::string getNume();
    void setName(std::string);
    std::vector<std::string> getNrBus();
    void setNrBus(std::vector<std::string>);
};


#endif //BILETECTP_STATIE_H
