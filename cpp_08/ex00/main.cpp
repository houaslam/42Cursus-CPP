#include "easyfind.hpp"

int main()
{
    int i = 0;
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> vec;
    std::list<int> lst;
    std::forward_list<int> f_lst = {1, 2, 3, 4, 5};
    std::deque<int> deq;

    while(i < 5)
    {
        lst.push_back(i);
        deq.push_back(i);
        vec.push_back(i++);
    }
    try {
        std::cout << easyfind(arr, 9) << std::endl; }
    catch(ElementNotFound &exp){
        std::cerr << exp.what();
    }
    try{
        std::cout << easyfind(deq, 3) << std::endl;
    }
    catch(ElementNotFound &exp){
        std::cerr << exp.what();
    }
	try{
        std::cout << easyfind(lst, 3) << std::endl;
	}
    catch(ElementNotFound &exp){
        std::cerr << exp.what();
    }
	try{
        std::cout << easyfind(vec, 3) << std::endl;
	}
    catch(ElementNotFound &exp){
        std::cerr << exp.what();
    }
	try{
        std::cout << easyfind(f_lst, 3) << std::endl;
	}
    catch(ElementNotFound &exp){
        std::cerr << exp.what();
    }
}