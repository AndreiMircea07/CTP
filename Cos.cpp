#include "Cos.h"

Cos::Cos() {
	this->sum = 0;
}

Cos::Cos(const Cos& c) {
	this->sum = c.sum;
	this->repo = c.repo;
}

Cos::~Cos() = default;

void Cos::addBilet(Bilet * b) {
	if (b->getSerie()[0] == 'U') this->sum += 5;
	else this->sum += 8;
	this->repo.add(b);
}

void Cos::deleteBilet(int p) {
	if (this->repo.getAll().at(p)->getSerie()[0] == 'U') this->sum -= 5;
	else this->sum -= 8;
	this->repo.deleteElem(p);
}

std::vector<Bilet*> Cos::getAll() {
	return this->repo.getAll();
}

void Cos::emptyCos() {
	this->sum = 0;
	//this->repo.deleteAll();
}

int Cos::getSize() {
	return this->repo.getSize();
}

int Cos::getPrice() {
	return this->sum;
}