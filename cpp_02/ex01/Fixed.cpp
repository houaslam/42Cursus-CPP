/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/23 18:44:56 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

const int Fixed::fract = 8;

//destructore and constructore
Fixed::Fixed(void)
{
    std::cout << "Default  constructor called\n";
    this->store = 0;
}

Fixed::Fixed(Fixed const &elem)
{
    std::cout << "Copy constructor called\n";
    this->store = elem.getRawBits();
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called\n";
    this->store = roundf(nb * (float)(1 << Fixed::fract));
}

Fixed::Fixed(const int elem)
{
    std::cout << "Int constructor called\n";
    this->store = elem << Fixed::fract;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

// other functions
int Fixed::getRawBits( void ) const
{
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

std::ostream& operator<<( std::ostream &output, const Fixed &D ) 
{
    output << (D.toFloat());
    return output;            
}

int Fixed::toInt( void ) const
{
    return (this->store >> Fixed::fract);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->store / (float)(1 << Fixed::fract));
}
