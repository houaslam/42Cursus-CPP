#include "easyfind.hpp"

int main()
{
    std::array<int, 5> nb = {1, 2, 3, 4, 5};
    try {
        std::cout << easyfind(nb, 9);
    }
    catch(ElementNotFound &exp)
    {
        std::cout << exp.what();
    }
}