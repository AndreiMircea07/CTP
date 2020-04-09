//
// Created by Ciprian-PC on 5/14/2019.
//

#ifndef BILETECTP_REPO_H
#define BILETECTP_REPO_H

#include <vector>


template <class T> class Repo {
protected:
    std::vector<T> v;
public:
    Repo();
    Repo(const Repo<T>&);
    ~Repo();
    void add(T);
    std::vector<T> getAll();
    int getSize();
    void deleteElem(int);
    Repo<T>& operator=(const Repo<T>&);
};

// default constructor
template <class T> Repo<T>::Repo() {
    this->v.reserve(100);
}

// copy constructor
template <class T> Repo<T>::Repo(const Repo<T>& r) {
    this->v = r.v;
}

// destructor
template <class T> Repo<T>::~Repo() = default;

/*
 * 		Desc:	Returns number of clients
 * 		Input:	None
 * 		Output:	Number of clients
 */
template <class T> int Repo<T>::getSize() {
    return this->v.size();
}


/*
 * 		Desc:	Add a new item to the end of the vector
 * 		Input:	Value of new item
 * 		Output:	None
 */
template <class T> void Repo<T>::add(T newElem) {
    this->v.push_back(newElem);
}

/*
 * 		Desc:	Returns all elements from vector
 * 		Input:	None
 * 		Output:	Vector of clients
 */
template <class T> std::vector<T> Repo<T>::getAll() {
    return this->v;
}

/*
 * 		Desc:	Deletes element from certain position
 * 		Input:	Position of elements to be deleted
 * 		Output:	None
 */
template <class T> void Repo<T>::deleteElem(int pos) {
    this->v.erase(this->v.begin() + pos);
}

/*
 * 		Desc:	Overloading function for operator '='
 * 		Input:	Constant repo
 * 		Output:	Value from current memory address
 */
template <class T> Repo<T>& Repo<T>::operator=(const Repo<T> & r) {
    if (this != &r) {
        if (r.v.size() != this->v.size()) {
            this->v = r.v;
        }
    }
    return *this;
}

#endif //BILETECTP_REPO_H
