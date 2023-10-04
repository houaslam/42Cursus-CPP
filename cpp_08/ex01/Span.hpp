#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <array>
#include <exception>

class NoSpaceLeft: public std::exception{
public :
    const char *what();
};

class Span{
private :
    unsigned long int nb;
    std::vector<int> storage;
public :
    Span(unsigned long int nb);
    ~Span();
    Span();
    Span(Span& ref);
    Span& operator=(Span& ref);

    void addNumber(int nb);
    int shortSpan();
    int LongestSpan();
    void addRange(int* range, int size);
};

#endif