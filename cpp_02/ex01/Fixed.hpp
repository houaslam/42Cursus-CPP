/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:12:34 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/06 15:48:14 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <math.h>

class Fixed{
private :
    int store;
    static const int fract;
public :
    // canonical form
    Fixed( void );
    Fixed( const int nb );
    Fixed( const float nb );
    Fixed( Fixed const &elem );
    ~Fixed( void );
    Fixed& operator=( const Fixed &elem );

    //function
    int getRawBits( void ) const;
	void setRawBits( int const raw );
    float toFloat( void ) const;
    int	toInt( void ) const;
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif