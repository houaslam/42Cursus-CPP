#include "Span.hpp"


int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << std::endl;
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}

// int main()
// {
//     Span nb(10);
//     try
//     {
//         std::array<int, 5> range = {1, 5, 9, 6, 8};
//         nb.addRange(range, 5);
//     }
//     catch(NoSpaceLeft& exp)
//     {
//         std::cerr << exp.what();
//     }
    
   
// }