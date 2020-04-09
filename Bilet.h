//
// Created by Ciprian-PC on 5/14/2019.
//

#ifndef BILETECTP_BILET_H
#define BILETECTP_BILET_H

#include <iostream>
#include <string>
#include <vector>

class Bilet {
protected:
	std::string serie;
public:
	Bilet();
	Bilet(const Bilet&);
	~Bilet();
	std::string getSerie();
	void setSerie(std::string);
	virtual std::vector<std::string> readBilet(std::string path);
};


#endif //BILETECTP_BILET_H

