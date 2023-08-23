/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:37 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/13 18:11:07 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal constructore called!\n";
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << "Animal parameters!\n";
}

Animal::~Animal( void ){
    std::cout << "Animal Destructore is called!\n";
}

Animal::Animal( Animal &to_copy )
{
    *this = to_copy;
    std::cout << "Copy constructore called!\n";
}

Animal& Animal::operator=(const Animal& elem){
    this->type = elem.type;
    return *this;
}
