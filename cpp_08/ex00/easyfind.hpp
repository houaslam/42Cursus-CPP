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
    const char *what() const  _NOEXCEPT{
        return "element not found";
    }
};

template <typename container>
int easyfind(container& elem, int b){
    if (std::find(elem.begin(), elem.end(), b) != elem.end())
        return b;
    throw ElementNotFound();
}

template <typename container>
void    isItFound(container& arr ,int k){
    try {
        std::cout << easyfind(arr, k) << " is found" << std::endl; }
    catch(std::exception &exp){
        std::cerr << exp.what() << std::endl;
    }
}

#endif