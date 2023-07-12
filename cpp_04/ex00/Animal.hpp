
#include <iostream>
#include <string>
#ifndef Animal_HPP
#define Animal_HPP

class Animal{
    protected :
        std::string type;
    public :
        // constructor and destructore
        Animal(Animal& tocpy);
        Animal(void);
        ~Animal(void);

        //function
        std::string getType();
        void makeSound(void);
        Animal& operator=(const Animal& elem);
};

class Dog : public Animal{
    protected :
        std::string type;
    public :
        // constructor and destructore
        Dog(std::string name);
        Dog(Dog& tocpy);
        Dog(void);
        ~Dog(void);

        //function
        void makeSound(void);
};

class Cat : public Animal{
    protected :
        std::string type;
    public :
        // constructor and destructore
        Cat(std::string name);
        Cat(Cat& tocpy);
        Cat(void);
        ~Cat(void);

        //function
        void makeSound(void);
};

#endif