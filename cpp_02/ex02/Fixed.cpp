/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/13 10:44:22 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

const int Fixed::fract = 8;

//destructore and constructore
Fixed::Fixed(void)
{
    // std::cout << "Default  constructor called\n";
    this->store = 0;
}

Fixed::Fixed(Fixed const &elem)
{
    // std::cout << "Copy constructor called\n";
    this->store = elem.getRawBits();
}

Fixed::Fixed(const float nb)
{
    // std::cout << "Float constructor called\n";
    this->store = roundf(nb * (float)(1 << Fixed::fract));
}

Fixed::Fixed(const int elem)
{
    // std::cout << "Int constructor called\n";
    this->store = elem << Fixed::fract;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called\n";
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

std::ostream &operator<<( std::ostream &output, const Fixed &D ) 
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


Fixed Fixed::operator+(Fixed &elem )
{
    Fixed result;
    result.store = this->store + elem.getRawBits();
    return (result);
}

Fixed Fixed::operator-(Fixed &elem )
{
    Fixed result;
    result.store = this->store - elem.getRawBits();
    return (result);
}

Fixed Fixed::operator*(Fixed &elem )
{
    Fixed result;
    result.store = this->store * elem.getRawBits();
    return (result);
}

Fixed Fixed::operator/(Fixed &elem )
{
    Fixed result;
    result.store = this->store / elem.getRawBits();
    return (result);
}

Fixed &Fixed::operator++(void)
{
    store +=  1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    store -=  1;
    return (*this);
}


int Fixed::operator>(Fixed &elem )
{
    if (store > elem.getRawBits())
        return(1);
    else 
        return (0);
}
int Fixed::operator<(Fixed &elem )
{
    if (store < elem.getRawBits())
        return(1);
    else 
        return (0);
}
int Fixed::operator>=(Fixed &elem )
{
    if (store >= elem.getRawBits())
        return(1);
    else 
        return (0);
}
int Fixed::operator<=(Fixed &elem )
{
    if (store <= elem.getRawBits())
        return(1);
    else 
        return (0);
}
int Fixed::operator==(Fixed &elem )
{
    if (store == elem.getRawBits())
        return(1);
    else 
        return (0);
}
int Fixed::operator!=(Fixed &elem )
{
    if (store != elem.getRawBits())
        return(1);
    else 
        return (0);
}

Fixed &Fixed::min(Fixed &elem , Fixed &other)
{
    if(elem.getRawBits() < other.getRawBits())
        return(elem);
    return(other);
}
Fixed &Fixed::&max(Fixed &elem , const Fixed &other)
{
    if(elem.getRawBits() > other.getRawBits())
        return(elem);
    return(other);
}

// Fixed &Fixed::min(Fixed &elem , const Fixed &other)
// {
//     if(elem.getRawBits() < other.getRawBits())
//         return(elem);
//     return(other);
// }
// Fixed &Fixed::max(const Fixed &elem , const Fixed &other)
// {
//     if(elem.getRawBits() > other.getRawBits())
//         return(elem);
//     return(other);
// }

