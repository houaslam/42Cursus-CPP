#include "Animal.hpp"

// constructor and destructore

Animal::Animal(void)
{
    std::cout <<  "Animal constructore called\n";
}

Animal::~Animal(void)
{
    std::cout <<  "Animal Destructore called\n";
}


Animal::Animal(Animal& tocpy)
{
    *this = tocpy;
     std::cout << "Animal copy constructor called\n";
}

//function

void Animal::makeSound(void)
{
    std::cout << "ANIMAL SOUND!\n";
}

std::string Animal::getType(void)
{
    return this->type;
}

Animal& Animal::operator=(const Animal& elem)
{
    std::cout << "Copy assignment operator called\n";
    this->type = elem.type;
    return *this;
}