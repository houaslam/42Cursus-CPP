#ifndef EASY_FIND_HPP   
#define EASY_FIND_HPP   

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>	
#include <exception>

class ElementNotFound : public std::exception{
public :
    const char *what(){
        return "element not found\n";
    }
};

template <typename container>
int easyfind(container& elem, int b){
    typename container::const_iterator pos = elem.begin();
    while(pos != elem.end())
    {
        if (*pos == b)
            return *pos;
        pos++;
    }
    throw ElementNotFound();
}

template <typename container>
void    isItFound(container& arr ,int k){
    try {
        std::cout << easyfind(arr, k) << std::endl; }
    catch(std::exception &exp){
        std::cerr << exp.what() << std::endl;
    }
}

#endif