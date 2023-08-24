/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:21:27 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 11:00:06 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* i2 = new WrongCat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;
    std::cout << std::endl;
    i->makeSound(); //will output the cat sound!
    i2->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    wrongmeta->makeSound();
    std::cout << std::endl;
    delete j;
    delete i;
    delete i2;
    delete meta;
    delete wrongmeta;
    return 0;
}