#include <utility>
#include <fstream>
#include "Bilet.h"

Bilet::Bilet() {
	this->serie = "";
}

Bilet::Bilet(const Bilet &b) {
	this->serie = b.serie;
}

Bilet::~Bilet() = default;

std::string Bilet::getSerie() {
	return this->serie;
}

void Bilet::setSerie(std::string s) {
	this->serie = std::move(s);
}

std::vector<std::string> Bilet::readBilet(std::string path) {
	std::ifstream fin(path);
	std::vector<std::string> v;
	std::string line;
	while (std::getline(fin, line)) {
		v.push_back(line);
	}
	return v;
}

