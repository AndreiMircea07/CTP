#include <utility>

//
// Created by Ciprian-PC on 5/22/2019.
//

#ifndef BILETECTP_EXCEPTION_H
#define BILETECTP_EXCEPTION_H

#include <exception>
#include <string>
#include <iostream>

class Exception : public std::exception {
private:
    std::string _msg;
public:
    explicit Exception(std::string  msg) : _msg(std::move(msg)) {}

    virtual const char* what() const noexcept override {
        return _msg.c_str();
    }
};


#endif //BILETECTP_EXCEPTION_H
