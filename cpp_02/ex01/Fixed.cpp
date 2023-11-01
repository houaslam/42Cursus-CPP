/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:14:27 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/31 21:02:52 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed( void )
{
    std::cout << "Default  constructor called\n";
    this->store = 0;
}

Fixed::Fixed( Fixed const &elem )
{
    std::cout << "Copy constructor called\n";
    this->store = elem.getRawBits();
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
    return(this->store);
}


void Fixed::setRawBits( int const raw )
{
    this->store = raw;
}

Fixed&    Fixed::operator=( const Fixed &elem )
{
    std::cout << "Copy assignment operator called\n";
    this->store = elem.getRawBits();
    return(*this);
}

Fixed::Fixed( const int nb )
{
    std::cout << "int constructor called\n";
    this->store = nb << this->fract;
}

Fixed::Fixed( const float nb )
{
    std::cout << "float constructor called\n";
    this->store = roundf(nb * (1 << fract));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->store / (float)(1 << fract));
}

int	Fixed::toInt( void ) const
{
    return(this->store >> this->fract);
}

std::ostream& operator<<( std::ostream& out, const Fixed& fixed )
{
    out << fixed.toFloat();
    return (out);
}
