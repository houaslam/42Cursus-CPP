#include "iter.hpp"
#include <string.h>


int main(){
  int t[5] = {0,2,4,5,9};
  char c[] = "hello";
  int k = 0;

  iter<int>(t, 5, add<int>);
  iter<char>(c, 5, add<char>);

  while(k < 5)
    std::cout << t[k++] << "\t";
  
  std::cout << std::endl;
  k = 0;

  while(k < 5)
    std::cout << c[k++] << "\t";
}