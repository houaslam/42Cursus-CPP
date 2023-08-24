/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:58:58 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 18:28:28 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

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
