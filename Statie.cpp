#include <utility>

//
// Created by Ciprian-PC on 5/14/2019.
//

#include "Statie.h"

Statie::Statie() {
    this->nrCtr = -1;
    this->nume = "";
    this->nrBus.reserve(10);
}

Statie::Statie(const Statie &s) {
    this->nrCtr = s.nrCtr;
    this->nume = s.nume;
    this->nrBus = s.nrBus;
}

Statie::~Statie() = default;

int Statie::getNrCtr() {
    return this->nrCtr;
}

void Statie::setNrCtr(int n) {
    this->nrCtr = n;
}

std::string Statie::getNume() {
    return this->nume;
}

void Statie::setName(std::string n) {
    this->nume = std::move(n);
}

std::vector<std::string> Statie::getNrBus() {
    return this->nrBus;
}

void Statie::setNrBus(std::vector<std::string> v) {
    this->nrBus = std::move(v);
}