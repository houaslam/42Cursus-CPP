#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <climits>
#include <exception>


class Span{
private :
    unsigned int nb;
    std::vector<unsigned int> storage;
public :
    Span(int nb);
    Span();
    Span(const Span& ref);
    Span& operator=(const Span& ref);
    ~Span();

    void addNumber(long int nb);
    int shortestSpan();
    int longestSpan();
    void addRange(std::vector<int>::iterator& start, std::vector<int>::iterator& end);
};

#endif