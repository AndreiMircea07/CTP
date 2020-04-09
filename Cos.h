#ifndef BILETECTP_COS_H
#define BILETECTP_COS_H

#include "Repo.h"
#include "Bilet.h"

class Cos {
private:
	int sum;
	Repo<Bilet*> repo = Repo<Bilet*>();
public:
	Cos();
	Cos(const Cos&);
	~Cos();
	void addBilet(Bilet*);
	void deleteBilet(int);
	std::vector<Bilet*> getAll();
	void emptyCos();
	int getSize();
	int getPrice();
};


#endif //BILETECTP_COS_H