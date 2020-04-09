//
// Created by Ciprian-PC on 5/14/2019.
//

#ifndef BILETECTP_REPOFILE_H
#define BILETECTP_REPOFILE_H

#include <fstream>
#include "Repo.h"

template <class T> class RepoFile : public Repo<T> {
public:
    RepoFile();
    RepoFile(const RepoFile&);
    ~RepoFile();
    Repo<T> readData(const std::string&);
};

template <class T> RepoFile<T>::RepoFile() {
    this->v.reserve(100);
}

template <class T> RepoFile<T>::RepoFile(const RepoFile &r) {
    this->v = r.v;
}

template <class T> RepoFile<T>::~RepoFile() = default;

template <class T> Repo<T> RepoFile<T>::readData(const std::string &path) {

}

#endif //BILETECTP_REPOFILE_H
