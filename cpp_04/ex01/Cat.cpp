/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:34:49 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 19:18:25 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Meow Meow....!\n";
}
// DESTRUCTORE && CONSTRUCORE

Cat::Cat(){
	brain = new Brain();
	setType("Cat");
	std::cout << "CAT Default constructor called!\n";
}

Cat::~Cat(){
	std::cout << "CAT Destructor called!\n";
	delete brain;
}

Cat::Cat(Cat &cat){
	*this = cat;
	std::cout << "CAT copy constructor called!\n";
}

Cat& Cat::operator=(const Cat& elem){
	this->brain = new Brain(*elem.brain);
	this->type = elem.type;
	return *this;
}
