#ifndef EASY_FIND_HPP   
#define EASY_FIND_HPP   

#include <iostream>
#include <array>
#include <exception>

class ElementNotFound : public std::exception{
public :
    const char *what(){
        return "element not found\n";
    }
};

template <typename i>
int easyfind(i elem, int b){
    int k = 0;
    while(k < elem.size())
    {
        if (elem.at(k) == b)
            return b;
        k++;
    }
    throw ElementNotFound();
}

#endif