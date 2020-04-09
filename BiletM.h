#ifndef BILETECTP_BILETM_H
#define BILETECTP_BILETM_H

#include "Bilet.h"

class BiletM : public Bilet {
public:
	BiletM();
	BiletM(const BiletM&);
	~BiletM();
	std::vector<std::string> readBilet(std::string path) override;
};


#endif //BILETECTP_BILETM_H
