/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/22 16:21:49 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

Fixed::Fixed(void)
{
    std::cout << "Default  constructor called\n";
    this->store = 0;
}

Fixed::Fixed(Fixed &elem)
{
    std::cout << "Copy constructor called\n";
    this->store = elem.getRawBits();
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return(this->store);
}

void Fixed::setRawBits( int const raw )
{
    this->store = raw;
}

void    Fixed::operator=(Fixed &elem)
{
    std::cout << "Copy assignment operator called\n";
    this->store = elem.getRawBits();
}
