#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "stack top : " << mstack.top() << std::endl;
    std::cout << "stack size : " << mstack.size() << std::endl;

    mstack.pop();

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    int res = 0;
    std::cout << "stack element : ";
    while (it != ite) {
        std::cout << *it << " ";
        res += *it;
        ++it;
    }
    std::cout << std::endl;
    std::cout << "element addition : " << res << std::endl;
    std::stack<int> s(mstack);
    return 0;
}

// int main()
// {
//     std::list<int> mstack;

//     mstack.push_back(5);
//     mstack.push_back(17);

//     std::cout << "stack top : " << mstack.back() << std::endl;
//     std::cout << "stack size : " << mstack.size() << std::endl;

//     mstack.pop_back();

//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();

//     ++it;
//     --it;
//     int res = 0;
//     std::cout << "stack element : ";
//     while (it != ite) {
//         std::cout << *it << " ";
//         res += *it;
//         ++it;
//     }
//     std::cout << std::endl;
//     std::cout << "element addition is : " << res << std::endl;
//     std::stack<int, std::list<int> > s(mstack);
//     return 0;
// }
