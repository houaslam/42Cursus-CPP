/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/20 17:47:26 by houaslam         ###   ########.fr       */
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

Fixed::Fixed(const float nb)
{
    this->store = int32_t(nb * float(1 << this->fract));
}

Fixed::Fixed(const int elem)
{
    this->store = int32_t(elem * int(elem << 8));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}
int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called\n";
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

// std::ostream &Fixed::operator<<( std::ostream &output, const Fixed &D)
// {
//     output << D.getRawBits() <<"\n";
//     return(output)
//     // this->store = elem.getRawBits();
// }
