#include "iter.hpp"

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

int main(){
  int t[5] = {0,2,4,5,9};
  char *c = strdup("hello");
  int k = 0;

  iter<int>(t, 5, add);
  iter<char>(c, 5, add);

  while(k < 5)
    std::cout << t[k++] << "\t";
  
  std::cout << std::endl;
  k = 0;

  while(k < 5)
    std::cout << c[k++] << "\t";
  
  delete[] c;
}