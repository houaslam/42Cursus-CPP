#include "Span.hpp"


int main() {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
return 0;
}

// int main()
// {
//     std::vector<int> range;
//     int i = 0;

//     srand(time(NULL));
//     while(i < 100){
//         range.push_back(rand()%1000);
//         i++;
//     }

//     std::vector<int>::iterator start = range.begin();
//     std::vector<int>::iterator end = range.end();

//     try{
//         Span sp(100);
//         sp.addRange(start, end);
//         std::cout << std::endl;
//         std::cout << "shortest span " << sp.shortestSpan() << std::endl;
//         std::cout << "longest span " << sp.longestSpan() << std::endl;
//     }
//     catch(std::exception& exp){
//         std::cout << "ERROR : "<< exp.what() << std::endl;
//     }

//     return 0;
// }
