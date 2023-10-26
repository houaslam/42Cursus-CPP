#include "easyfind.hpp"

int main()
{
    int i = 0;
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> vec;
    std::list<int> lst;
    std::deque<int> deq;

    while(i < 5)
    {
        lst.push_back(i);
        deq.push_back(i);
        vec.push_back(i++);
    }

    isItFound(arr, 9);
    isItFound(deq, 2);
    isItFound(lst, 5);
    isItFound(vec, 3);
}