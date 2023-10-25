#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <array>
#include <stack>
#include <algorithm>
#include <exception>


class Span{
private :
    unsigned long int nb;
    std::vector<int> storage;
public :
    Span(int nb);
    ~Span();
    Span();
    Span(Span& ref);
    Span& operator=(Span& ref);

    void addNumber(int nb);
    int shortestSpan();
    int longestSpan();
    void addRange(std::vector<int>::iterator& start, std::vector<int>::iterator& end);
	class NoSpaceLeft: public std::exception{
	public :
		const char *what()const _NOEXCEPT;
	};
};

#endif