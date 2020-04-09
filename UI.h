#ifndef UI_H
#define UI_H

#include "User.h"
#include "Statie.h"
#include "Repo.h"
#include "Cos.h"
#include "Bilet.h"
#include "Graph.h"
#include"BiletU.h"
#include"BiletM.h"
#include"Exception.h"
using namespace std;

class UI {
public:
    UI();
    UI(const UI&);
    ~UI();
    void run();
	void showmenu();
	void showmenu2();
	bool Login(const string& user, const string& pass);
	void readOrar(string);
	void readStatii(string);
	void addUser(string nume, string pass);
	vector<Statie> readStatii2(string path);

};

#endif
