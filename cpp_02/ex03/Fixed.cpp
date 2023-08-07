/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:14:27 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 17:19:42 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

//constructors

Fixed::Fixed( void )
{
    // std::cout << "Default  constructor called\n";
    this->store = 0;
}

Fixed::Fixed( Fixed const &elem )
{
    // std::cout << "Copy constructor called\n";
    this->store = elem.getRawBits();
}

Fixed::~Fixed( void )
{
    // std::cout << "Destructor called\n";
}

Fixed::Fixed( const int nb )
{
    // std::cout << "int constructor called\n";
    this->store = nb << this->fract;
}

Fixed::Fixed( const float nb )
{
    // std::cout << "float constructor called\n";
    this->store = roundf(nb * (1 << fract));
}

// operator overload 

Fixed&    Fixed::operator=( const Fixed &elem )
{
    // std::cout << "Copy assignment operator called\n";
    this->store = elem.getRawBits();
    return(*this);
}

std::ostream& operator<<( std::ostream& out, const Fixed& fixed )
{
    out << fixed.toFloat();
    return (out);
}

int Fixed::operator>( const Fixed &first ) const
{
    return (this->store > first.store);
}

int Fixed::operator<( const Fixed &first ) const
{
    return (this->store < first.store);
}

int Fixed::operator>=( const Fixed &first ) const
{
    return (this->store >= first.store);
}

int Fixed::operator<=( const Fixed &first ) const
{
    return (this->store <= first.store);
}

int Fixed::operator==( const Fixed &first ) const
{
    return (this->store == first.store);
}

int Fixed::operator!=( const Fixed &first ) const
{
    return (this->store != first.store);
}

Fixed Fixed::operator+( const Fixed &a ) const
{
    Fixed res;
    res.store = a.store + this->store;
    return(res);
}

Fixed Fixed::operator*( const Fixed &a ) const
{
    Fixed res;
    
    res.setRawBits(a.store * this->toFloat());
    return(res);
}

Fixed Fixed::operator/( const Fixed &a ) const
{
    Fixed res;
    res.store =  this->store / a.toFloat();
    return(res);
}

Fixed Fixed::operator-( const Fixed &a ) const
{
    Fixed res;
    res.store =this->store -  a.store;
    return(res);
}

Fixed& Fixed::operator++( void )
{
    this->store += 1;
    return( *this);
}

Fixed& Fixed::operator++( int nb )
{
    this->store += nb;
    return( *this);
}

Fixed& Fixed::operator--( void )
{
    this->store -= 1;
    return( *this);
}

Fixed& Fixed::operator--( int nb )
{
        this->store -= nb;
    return( *this);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

//regular funtion
int Fixed::getRawBits( void ) const
{
    return(this->store);
}

void Fixed::setRawBits( int const raw )
{
    this->store = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->store / (float)(1 << fract));
}

int	Fixed::toInt( void ) const
{
    return(this->store >> this->fract);
}

Fixed Fixed::abs()
{
    int k = fabs(this->store) / (1 << fract);
    Fixed res(k);
    return(res);
}
