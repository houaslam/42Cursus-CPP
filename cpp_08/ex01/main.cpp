#include "Span.hpp"


int main()
{
    Span sp(100);
    std::vector<int> range;
    srand(time(NULL));
    int i = 0;
    while(i < 100){
        range.push_back(rand()%100);
        i++;
    }
    std::vector<int>::iterator start = range.begin();
    std::vector<int>::iterator end = range.end();

    try{
        sp.addRange(start, end);
    }
    catch(NoSpaceLeft& exp){
        std::cout << exp.what();
    }

    std::cout << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    return 0;
}
