#ifndef BITCOINEXCHANGR_HPP
#define BITCOINEXCHANGR_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <exception>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <climits>


class Bitcoin{
    private :
        std::map<std::string, int> holder;
    public :
    // CANONICAL FORM
    Bitcoin();
    ~Bitcoin();
    Bitcoin(Bitcoin& org);
    Bitcoin& operator=(Bitcoin& org);


    // REGULAR FUNCTION
    void    checkFormat(std::string str);
    void    fillDate(std::string str);

    // EXCEPTION
    class numberNotPositive : public std::exception{
        const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
    };

    class numberTooLarge : public std::exception{
        const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
    };

    class formatNotValid : public std::exception{
        const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
    };

    class dateNotValid : public std::exception{
        const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
    };
};


#endif