#ifndef EASY_FIND_HPP   
#define EASY_FIND_HPP   

#include <iostream>
#include <vector>
#include <list>
#include <deque>	
#include <algorithm>
#include <exception>

template <class container>
int easyfind(container& elem, int b){
    typename container::iterator res = std::find(elem.begin(), elem.end(), b);
    if(res== elem.end())
        throw std::out_of_range("element not found");
    return b;
}

template <typename container>
void    isItFound(container& arr ,int k){
    try {
        std::cout << easyfind<container>(arr, k) << " is found" << std::endl;
    }
    catch(std::exception &exp){
        std::cerr << exp.what() << std::endl;
    }
}

#endif