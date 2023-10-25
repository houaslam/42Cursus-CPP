#include "Span.hpp"


int main()
{
    std::vector<int> range;
    int i = 0;

    srand(time(NULL));
    while(i < 100){
        range.push_back(rand()%100);
        i++;
    }

    std::vector<int>::iterator start = range.begin();
    std::vector<int>::iterator end = range.end();

    try{
        Span sp(0);
        sp.addRange(start, end);
        std::cout << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception& exp){
        std::cout << exp.what();
    }

    
    return 0;
}
