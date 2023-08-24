/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:37 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 11:00:35 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal constructor called!\n";
}

WrongAnimal::WrongAnimal( std::string type ) : type( type )
{
    std::cout << "WrongAnimal parameters!\n";
}

WrongAnimal::~WrongAnimal( void ){
    std::cout << "WrongAnimal Destructor is called!\n";
}

WrongAnimal::WrongAnimal( WrongAnimal &to_copy )
{
    *this = to_copy;
    std::cout << "Copy constructor called!\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& elem){
    this->type = elem.type;
    return *this;
}

void		WrongAnimal::setType(std::string name){
    this->type = name;
}

const std::string	&WrongAnimal::getType(void) const {
        return type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "wrong animal : No Sound\n";
}
