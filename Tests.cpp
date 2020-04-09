

#include "Tests.h"
#include<assert.h>
#include<iostream>
using namespace std;

void Tests::testExceptions() {
    double x = 1.2;
    try {
        if (int(x) != x)
            throw Exception("Double instead of int");
    }
    catch (Exception& e) {
        std::cout << e.what() << '\n';
    }
}


void Tests::graphTest() {
    Graph g = Graph(9);
    std::vector<int> dist;

    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    dist = g.shortestPath(5);

    std::cout << "Vertex   Dist. from source\n";
    for (int i = 0; i < 9; ++i)
        std::cout << i << "\t\t" << dist[i] << '\n';

}

void Tests::testSHA2() {
    std::string s = "9876543210";
    std::cout << sha256(s) << '\n';
}

void Tests::testRepo() {
		Statie c1 = Statie();

		c1.setName("Sora");
		c1.setNrCtr(23);

		Repo<Statie> rep = Repo<Statie>();
		rep.add(c1);
		vector<Statie> tmp = rep.getAll();

		assert(rep.getSize() == 1);

		Repo<Statie> rep2;
		rep2 = rep;

		assert(rep2.getSize() == 1);
		tmp.clear();
		tmp = rep2.getAll();

		assert(tmp[0].getNume() == "Sora");
		rep2.deleteElem(0);
		assert(rep2.getSize() == 0);

	}

void Tests::testStatie() {

	Statie c1 = Statie();

	c1.setName("Sora");
	c1.setNrCtr(23);


	assert(c1.getNume() == "Sora");
	assert(c1.getNrCtr() == 23);


	Statie c2 = Statie();
	c2 = c1;

	assert(c2.getNume() == "Sora");
	assert(c2.getNrCtr() == 23);


}

void Tests::testUser() {

	User c1 = User();
	c1.setNume("Sora");
	assert(c1.getNume() == "Sora");

	User c2 = User();
	c2 = c1;

	assert(c2.getNume() == "Sora");


}