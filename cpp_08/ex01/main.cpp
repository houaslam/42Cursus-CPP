#include "Span.hpp"

int main()
{
    Span nb(10);
    try
    {
       std::array<int> range = {1, 5, 9, 6, 8};
        nb.addRange(range, 5);
    }
    catch(NoSpaceLeft& exp)
    {
        std::cerr << exp.what();
    }
    
   
}