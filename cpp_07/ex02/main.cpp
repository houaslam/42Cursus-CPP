#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    try{

    Array <int> obj(8);
    Array <char> c_obj(8);
    obj[0] = 5;
    c_obj[2] = 'a';
    std::cout << obj[0] << std::endl << c_obj[2] << std::endl;
    std::cout << obj[9] << std::endl << c_obj[13];
    }
    catch (invalid_argument &exp){
        std::cerr << exp.what();
    }
}