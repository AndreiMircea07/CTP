#ifndef BILETECTP_BILETU_H
#define BILETECTP_BILETU_H

#include "Bilet.h"

class BiletU : public Bilet {
public:
	BiletU();
	BiletU(const BiletU&);
	~BiletU();
	std::vector<std::string> readBilet(std::string path) override;
};


#endif //BILETECTP_BILETU_H
