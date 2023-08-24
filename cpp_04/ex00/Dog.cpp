/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:58:58 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 17:28:50 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound() const {
    std::cout << "Wouf Wouf....!\n";
}

//DESTRUCTORE && CONSTRUCTORE
Dog::Dog(){
    std::cout << "DOG Default constructor called!\n";
    setType("Dog");
}

Dog::~Dog(){
    std::cout << "DOG destructor called!\n";
}

Dog::Dog(Dog &dog)
{
    *this = dog;
}
