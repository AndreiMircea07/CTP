//
// Created by Ciprian-PC on 5/22/2019.
//

#ifndef BILETECTP_TESTS_H
#define BILETECTP_TESTS_H

#include "Exception.h"
#include "Graph.h"
#include "SHA256.h"
#include "Statie.h"
#include "User.h"

class Tests {
public:
    void testExceptions();
    void graphTest();
    void testSHA2();
	void testRepo();
	void testStatie();
	void testUser();
};


#endif //BILETECTP_TESTS_H
