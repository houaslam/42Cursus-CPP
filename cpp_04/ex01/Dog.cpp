/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:58:58 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 19:18:08 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

void    Dog::makeSound() const {
    std::cout << "Wouf Wouf....!\n";
}

//DESTRUCTORE && CONSTRUCTORE
Dog::Dog(){
	brain = new Brain();
    std::cout << "DOG Default constructor called!\n";
    setType("Dog");
}

Dog::~Dog(){
    std::cout << "DOG destructor called!\n";
    delete brain;
}

Dog::Dog(Dog &dog)
{
    *this = dog;
}

Dog& Dog::operator=(Dog &src){
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    return *this;
}
