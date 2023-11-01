#ifndef EASY_FIND_HPP   
#define EASY_FIND_HPP   

#include <iostream>
#include <vector>
#include <list>
#include <deque>	
#include <exception>

template <class container>
int easyfind(container& elem, int b){
    typename container::iterator res = elem.begin();
    while (res != elem.end())
    {
        if (*res == b)
            return b;
        res++;
    }
    throw std::out_of_range("element not found");
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