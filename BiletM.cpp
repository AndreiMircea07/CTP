#include "BiletM.h"
#include <fstream>

BiletM::BiletM() {
	this->serie = "";
}

BiletM::BiletM(const BiletM & b) {
	this->serie = b.serie;
}

BiletM::~BiletM() = default;

std::vector<std::string> BiletM::readBilet(std::string path) {
	std::ifstream fin(path);
	std::vector<std::string> v;
	std::string line;
	while (std::getline(fin, line)) {
		v.push_back(line);
	}
	return v;
}
