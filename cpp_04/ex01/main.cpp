/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:21:27 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 09:57:23 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Dog basic;
    Dog tmp = basic;
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // std::cout << std::endl;
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << std::endl;

    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // std::cout << std::endl;

    // delete j;
    // delete i;
    // delete basic;
    return 0;
}