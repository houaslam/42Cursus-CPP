#ifndef BITCOINEXCHANGR_HPP
#define BITCOINEXCHANGR_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <exception>

class formatNotValid : public std::exception{
    const char* what() const _NOEXCEPT{
        return "format is not valid";
    }
};

class dateNotValid : public std::exception{
    const char* what() const _NOEXCEPT{
        return "date is not valid";
    }
};

#endif