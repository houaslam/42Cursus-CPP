#include <iostream>

class Base{
    public :
        virtual void func(){
            std::cout << "Base";
        }
};

class Derived : public Base{
    public :
        void func(){
            std::cout << "Derived";
        }
};

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    Base *b = new Derived();
    b->func();
}