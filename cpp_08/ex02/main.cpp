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
//     MutantStack<int, std::list<int> > mstack;
//
//     mstack.push(5);
//     mstack.push(17);
//      MutantStack<int, std::list<int> >  second_stack = mstack;
//
//     std::cout << "stack top : " << mstack.top() << std::endl;
//     std::cout << "second stack top : " << second_stack.top() << std::endl;
//
//     mstack.pop();
//     std::cout << "stack size : " << mstack.size() << std::endl;
//
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//
//     MutantStack<int, std::list<int> >::iterator it = mstack.begin();
//     MutantStack<int, std::list<int> >::iterator ite = mstack.end();
//
//     ++it;
//     --it;
//     int res = 0;
//     while (it != ite) {
//         std::cout << *it << std::endl;
//         res += *it;
//         ++it;
//     }
//     std::cout << "element addition is : " << res << std::endl;
//     std::stack<int, std::list<int> > s(mstack);
//     return 0;
// }