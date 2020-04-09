#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "UI.h"
#include "SHA256.h"
#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>
#include "Cos.h"
#include <windows.h>
#include <ctime>
//#include <iomanip>
#include<random>

//using namespace cv;
using namespace std;
UI::UI() = default;

UI::UI(const UI &ui) {

}

UI::~UI() = default;

void UI::readOrar(string path) {
	string path1;
	if (path == "1")path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L1\Orar\L-V\DUS.txt)";
	else if (path == "3") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L3\Orar\L-V\DUS.txt)";
	else if (path == "5") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L5\Orar\L-V\DUS.txt)";
	else if (path == "6") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L6\Orar\L-V\DUS.txt)";
	else if (path == "8") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L8\Orar\L-V\DUS.txt)";
	else if (path == "9") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L9\Orar\L-V\DUS.txt)";
	else if (path == "21") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L21\Orar\L-V\DUS.txt)";
	else if (path == "24B") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L24B\Orar\L-V\DUS.txt)";
	else if (path == "25") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L25\Orar\L-V\DUS.txt)";
	else if (path == "31") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L31\Orar\L-V\DUS.txt)";
	else if (path == "35") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L35\Orar\L-V\DUS.txt)";
	else if (path == "M11") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M11\Orar\L-V\DUS.txt)";
	else if (path == "M21") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M21\Orar\L-V\DUS.txt)";
	else if (path == "M22") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M22\Orar\L-V\DUS.txt)";
	else if (path == "M31") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M31\Orar\L-V\DUS.txt)";
	vector<string> v;
	fstream fin(path1);
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 2;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	for (int i = 0; i < v.size(); i++) {
		cout.width(30);
		cout << v[i] << endl;
	}
	SetConsoleTextAttribute(hConsole, 15);
}

void UI::readStatii(string path) {
	string path1;
	if (path == "1")path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L1\Statii\DUS.txt)";
	else if(path == "3") path1= R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L3\Statii\DUS.txt)";
	else if (path == "5") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L5\Statii\DUS.txt)";
	else if (path == "6") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L6\Statii\DUS.txt)";
	else if (path == "8") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L8\Statii\DUS.txt)";
	else if (path == "9") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L9\Statii\DUS.txt)";
	else if (path == "21") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L21\Statii\DUS.txt)";
	else if (path == "24B") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L24B\Statii\DUS.txt)";
	else if (path == "25") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L25\Statii\DUS.txt)";
	else if (path == "31") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L31\Statii\DUS.txt)";
	else if (path == "35") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\L35\Statii\DUS.txt)";
	else if (path == "M11") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M11\Statii\DUS.txt)";
	else if (path == "M21") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M21\Statii\DUS.txt)";
	else if (path == "M22") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M22\Statii\DUS.txt)";
	else if (path == "M31") path1 = R"(C:\Users\Miru\Desktop\BileteCTP2\Linii\M31\Statii\DUS.txt)";
	vector<string> v;
	fstream fin(path1);
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
	
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 2;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	cout.width(15);
	for (int i = 0; i < v.size(); i++)
	     cout << v[i] << endl;
	SetConsoleTextAttribute(hConsole, 15);

}

vector<Statie> UI::readStatii2(string path) {
	vector<Statie> v;
	fstream fin(path);
	string line;

	while (getline(fin, line)) {
		Statie s = Statie();
		int i = 0;
		string nr;
		while (line[i] != ','){
			nr += line[i];
			i++;
		}
		++i;
		s.setNrCtr(stoi(nr));
		string nume;
		while (i<line.size()) {
			nume += line[i];
			i++;
		}
		++i;
		s.setName(nume);
		v.push_back(s);
	}
	return v;
}

bool UI::Login(const string& user, const string& pass) {

	string path = R"(C:\Users\Miru\Desktop\BileteCTP2\users.txt)";

	try {
		std::ifstream fin(path);

		if (!fin.is_open())
			throw Exception("File not found\n");

		string line;
		while (getline(fin, line))
			if (line.find(user) != string::npos && line.find(pass) != string::npos)
				return true;
	}
	catch (Exception& e) {
		cout << e.what();
	}
	return false;
}
void UI::showmenu() {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 3;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);

	std::cout << "Optiune 1: Logare user existent\n";
	std::cout << "Optiune 2: Fara logare\n";
	std::cout << "Optiune 3: User nou\n";
	std::cout << "Optiune 4: Iesire\n";
	cout << endl;
	SetConsoleTextAttribute(hConsole, 15);
}

void UI::showmenu2() {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 3;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	cout << "Ce optiune doresti sa alegi?" << endl;
	cout << "1. Cauta o ruta de distanta minima\n";
	cout << "2. Afiseaza orarul unei linii\n";
	cout << "3.Afiseaza statiile unei linii\n";
	cout << "4. Cumpara bilete\n";
	cout << "5. Log out\n";
	cout << endl;
	SetConsoleTextAttribute(hConsole, 15);
}

void UI::addUser(string nume, string pass) {
	string path= R"(C:\Users\Miru\Desktop\BileteCTP2\users.txt)";
	ofstream fout;
	fout.open(path, ios::app);
	fout << endl;
	fout << nume;
	fout << ",";
	fout << pass;
	fout.close();
}

void UI::run() {
	cout.width(67);
	cout << "Bun venit la CTP!"<<endl;
	cout << __TIMESTAMP__ << endl;
	int optiune = 0;
	while (optiune != 4) {
		showmenu();
		cout << "Optiune: ";
		cin >> optiune;
		if (optiune == 1) {
			string user, pass, pass2;
			char ch;
			const char ENTER = 13;
			cout << "Username: ";
			cin >> user;
			cout << "Parola: ";
			while ((ch = _getch()) != ENTER) {
				pass += ch;
				cout << "*";
			}
			cout << endl;
			pass2 = sha256(pass);
			if (Login(user, pass2))
				cout << "Logare reusita. Bun venit " << user << "!" << endl;
			else cout << "Eroare la logare" << endl;
			int op = 1;
			while (op != 9 && Login(user,pass2)==true) {
				showmenu2();
				cout << "Optiune: ";
				cin >> op;
				if (op == 2) {
					string lin;
					cout << "Pt ce linie vrei sa vezi orarul?" << endl;
					cout << "Linia: ";
					cin >> lin;
					cout << "Orarul este: " << endl;
					readOrar(lin);
				}
				else if (op == 3) {
					string lin;
					cout << "Pt ce linie vrei sa vezi statiile?" << endl;
					cout << "Linia: ";
					cin >> lin;
					cout << "Statiile sunt: " << endl;
					readStatii(lin);
				}
				else if (op == 1) {

					Graph g = Graph(54);
					std::vector<int> dist;

					std::ifstream fin(R"(C:\Users\Miru\Desktop\BileteCTP2\Map.txt)");

					// Vezi ca daca nu sunt 53 de statii s-ar putea sa nu mearga
					// Cel mai ok schimbi in map coordonatele pentru a avea mai putine statii
					// si in fisierul cu statii sa adaugi numerele de criteriu
					int x, y, w;
					for (int i = 0; i < 56; ++i) {
						fin >> x >> y >> w;
						g.addEdge(x, y, w);
					}

					string st1, st2;
					cout << "Intre ce statii vrei sa cauti o ruta?" << endl;
					cout << "Statia de plecare: ";
					cin >> st1;
					cout << "Statia de sosire: ";
					cin >> st2;

					int stPoint, endPoint;
					vector<Statie> vs;
					string path3 = R"(C:\Users\Miru\Desktop\BileteCTP2\linii.txt)";
					vs = readStatii2(path3);	// Schimba din void readStatii(string path) in vector<Statie> readStatii(string path) !!!

					bool foundSt = false;
					bool foundEnd = false;
					for (int i = 0; i < vs.size() && !foundSt; ++i)
						if (vs[i].getNume() == st1) stPoint = i, foundSt = true;

					for (int i = 0; i < vs.size() && !foundEnd; ++i)
						if (vs[i].getNume() == st2) endPoint = i, foundEnd = true;

					dist = g.shortestPath(stPoint);

					cout << "Cel mai scurt drum de la " << st1 << "spre " << st2 << " ar dura " << dist[endPoint] << " minute"<<endl;

				}

				else if (op == 4) {
					int numBilete = 0;
					string opt;
					Cos c = Cos();
					do {
						cout << "Ce tip de bilet vrei sa adaugi in cos?" << endl << "Pt zona metropolitana(M) /urbana(U)"
							<< endl;
						string o;
						cout << "Optiune: ";
						cin >> o;
						if (o == "M") {
							Bilet *b = new BiletM();
							vector<string> v;
							string path = R"(C:\Users\Miru\Desktop\BileteCTP2\BiletM.txt)";
							v = b->readBilet(path);
							b->setSerie(v[rand() % v.size()]);
							c.addBilet(b);
							++numBilete;
						}
						else {
							Bilet *b = new BiletU();
							vector<string> v;
							string path = R"(C:\Users\Miru\Desktop\BileteCTP2\BiletU.txt)";
							v = b->readBilet(path);
							b->setSerie(v[rand() % v.size()]);
							c.addBilet(b);
							++numBilete;
						}
						// c.getAll();
						cout << "Totalul este " << c.getPrice() << endl;
						cout << "Doresti sa continui cumparaturile?" << endl;
						cin >> opt;
					} while (opt == "DA");

					cout << "Finalizezi plata?" << endl;
					string oo;
					cin >> oo;
					if (oo == "DA") cout << "Bilete cumparate" << endl;
					else {
						while (numBilete > 0) {
							--numBilete;
							c.deleteBilet(c.getSize() - 1); // daca refuza cumpararea, stergem toate biletele pe care le-am cumparat
						}
					}
				}

				else if (op == 5) {
					cout << "La revedere, " << user << endl;
					op = 9;
					}
				}
			}
		else if (optiune == 2) {
			int op = 1;
			while (op != 9) {
				HANDLE  hConsole;
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				int col = 12;
				FlushConsoleInputBuffer(hConsole);
				SetConsoleTextAttribute(hConsole, col);
				cout << "Deoarece nu esti un user logat vei putea doar sa vezi orarul sau statiile unui autobuz.\n";
				cout << "Pentru a avea acces si la restul optiunilor poti crea un cont\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				int col2 = 3;
				FlushConsoleInputBuffer(hConsole);
				SetConsoleTextAttribute(hConsole, col2);
				cout << "Ce optiune doresti sa alegi?" << endl;
				cout << "1. Afiseaza orarul unei linii\n";
				cout << "2.Afiseaza statiile unei linii\n";
				cout << "3. Main menu\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				cout << "Optiune: ";
				cin >> op;
				if (op == 1) {
					string lin;
					cout << "Pt ce linie vrei sa vezi orarul?" << endl;
					cout << "Linia: ";
					cin >> lin;
					cout << "Orarul este: " << endl;
					readOrar(lin);
				}
				else if (op == 2) {
					string lin;
					cout << "Pt ce linie vrei sa vezi statiile?" << endl;
					cout << "Linia: ";
					cin >> lin;
					cout << "Statiile sunt: " << endl;
					readStatii(lin);
				}
				else if (op == 3) {
					op = 9;
				}
			}
		}
		else if (optiune == 3) {
			string user, pass, pass2;
			cout << "Ce user vrei sa ai? " << endl;
			cout << "User: ";
			cin >> user;
			char ch;
			const char ENTER = 13;
			cout << "Ce parola vrei sa ai? " << endl;
			cout << "Parola: ";
			while ((ch = _getch()) != ENTER) {
				pass2 += ch;
				cout << "*";
			}
			cout << endl;
			pass = sha256(pass2);
			addUser(user, pass);
		}

	}
}