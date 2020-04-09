#include "BiletU.h"

#include <fstream>

BiletU::BiletU() {
	this->serie = "";
}

BiletU::BiletU(const BiletU & b) {
	this->serie = b.serie;
}

BiletU::~BiletU() = default;

std::vector<std::string> BiletU::readBilet(std::string path) {
	std::ifstream fin(path);
	std::vector<std::string> v;
	std::string line;
	while (std::getline(fin, line)) {
		v.push_back(line);
	}
	return v;
}
