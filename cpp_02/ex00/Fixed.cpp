/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/05 08:06:28 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

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
    std::cout << "setRawBits member function called\n";
    this->store = raw;
}

Fixed&    Fixed::operator=(Fixed &elem)
{
    std::cout << "Copy assignment operator called\n";
    this->store = elem.getRawBits();
    return(*this);
}
