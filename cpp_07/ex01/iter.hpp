#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, unsigned int size, void (*f)(T &)){
    int i = 0;
    while (i < size)
        f(array[i++]);
}

#endif