
#include <utility>
#include "User.h"
#include "SHA256.h"

User::User() {
    this->nume = "";
    this->parola = "";
    this->bilete = Repo<Bilet>();
}

User::User(const User& u) {
    this->nume = u.nume;
    this->parola = u.parola;
    this->bilete = u.bilete;
}

User::~User() = default;

std::string User::getNume() {
    return this->nume;
}

void User::setNume(std::string n) {
    this->nume = std::move(n);
}

std::string User::getParolaCriptata() {
    return sha256(this->parola);
}

void User::setParola(std::string p) {
    this->parola = std::move(p);
}

int User::getNrBilete() {
    return this->bilete.getSize();
}

void User::addBilet(const Bilet& b) {
    this->bilete.add(b);
}

void User::deleteBilet(int p) {
    this->bilete.deleteElem(p);
}

std::vector<Bilet> User::getAll() {
    return this->bilete.getAll();
}
