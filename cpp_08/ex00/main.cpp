#include "easyfind.hpp"


int main()
{
    int i = 0;
    std::vector<int> vec;
    std::list<int> lst;
    std::deque<int> deq;

    while(i < 5)
    {
        lst.push_back(i);
        deq.push_back(i);
        vec.push_back(i++);
    }

    isItFound<std::deque<int> >(deq, 2);
    isItFound<std::list<int> >(lst, 5);
    isItFound<std::vector<int> >(vec, 3);
}