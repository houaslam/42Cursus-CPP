#include "Animal.hpp"

// constructor and destructore

Cat::Cat(void)
{
    std::cout <<  "Cat constructore called\n";
}

Cat::~Cat(void)
{
    std::cout <<  "Cat Destructore called\n";
}


Cat::Cat(Cat& tocpy)
{
    *this = tocpy;
     std::cout << "Cat copy constructor called\n";
}

//function

void Cat::makeSound(void)
{
    std::cout << "MEOW MEOW MEOW!\n";
}

Cat& Cat::operator=(const Cat& elem)
{
    std::cout << "Copy assignment operator called\n";
    this->type = elem.type;
    return *this;
}