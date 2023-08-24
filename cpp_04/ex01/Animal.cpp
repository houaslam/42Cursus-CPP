/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:37 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 17:23:53 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal constructor called!\n";
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << "Animal parameters!\n";
}

Animal::~Animal( void ){
    std::cout << "Animal Destructor is called!\n";
}

Animal::Animal( Animal &to_copy )
{
    *this = to_copy;
    std::cout << "Copy constructor called!\n";
}

Animal& Animal::operator=(const Animal& elem){
    this->type = elem.type;
    return *this;
}

void		Animal::setType(std::string name){
    this->type = name;
}

const std::string	&Animal::getType(void) const {
        return type;
}

void    Animal::makeSound() const
{
    std::cout << "No Sound\n";
}
