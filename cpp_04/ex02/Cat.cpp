/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:34:49 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 11:07:37 by houaslam         ###   ########.fr       */
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
	int i;

	i = -1;
	while (++i < 100)
		this->brain[i] = elem.brain[i];
	this->type = elem.type;
	return *this;
}
