#include "Animal.hpp"

// constructor and destructore

Dog::Dog(void)
{
    std::cout <<  "Dog constructore called\n";
}

Dog::~Dog(void)
{
    std::cout <<  "Dog Destructore called\n";
}


Dog::Dog(Dog& tocpy)
{
    *this = tocpy;
     std::cout << "Dog copy constructor called\n";
}

//function

void Dog::makeSound(void)
{
    std::cout << "HOUF HOUF HOUF!\n";
}

Dog& Dog::operator=(const Dog& elem)
{
    std::cout << "Copy assignment operator called\n";
    this->type = elem.type;
    return *this;
}