/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:34:49 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 17:28:55 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Meow Meow....!\n";
}
// DESTRUCTORE && CONSTRUCORE

Cat::Cat(){
	setType("Cat");
	std::cout << "CAT Default constructor called!\n";
}

Cat::~Cat(){
	std::cout << "CAT Destructor called!\n";
}

Cat::Cat(Cat &cat){
	*this = cat;
	std::cout << "CAT copy constructor called!\n";
}
