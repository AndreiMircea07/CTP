

#ifndef BILETECTP_USER_H
#define BILETECTP_USER_H

#include <iostream>
#include <string>
#include "Repo.h"
#include "Bilet.h"

class User {
private:

    std::string nume, parola;
    Repo<Bilet> bilete;

public:

    User();
    User(const User&);
    ~User();

    std::string getNume();
    void setNume(std::string);

    std::string getParolaCriptata();
    void setParola(std::string);

    int getNrBilete();
    void addBilet(const Bilet&);
    void deleteBilet(int);
    std::vector<Bilet> getAll();

};


#endif //BILETECTP_USER_H
