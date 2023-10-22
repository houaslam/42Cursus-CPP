#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template< typename T >
void aff( T& x )
{
  std::cout << x << std::endl;
  return;
}

template <typename T>
void add(T &nb){
  nb += 1;
}

template <typename T>
void iter(T *array, unsigned int size, void (*f)(T &)){
    
    unsigned int i = 0;
    while (i < size)
        f(array[i++]);
}

template <typename T>
void iter(T *array, unsigned int size, void (*f)(const T&)){
    
    unsigned int i = 0;
    while (i < size)
        f(array[i++]);
}


#endif