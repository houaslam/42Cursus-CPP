/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:12:34 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 17:14:31 by houaslam         ###   ########.fr       */
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
    //comaparison
    int operator>( const Fixed &first ) const;
    int operator<( const Fixed &first ) const;
    int operator>=( const Fixed &first ) const;
    int operator<=( const Fixed &first ) const;
    int operator==( const Fixed &first ) const;
    int operator!=( const Fixed &first ) const;
    //arithmetic
    Fixed operator+( const Fixed &a ) const;
    Fixed operator*( const Fixed &a ) const;
    Fixed operator/( const Fixed &a ) const;
    Fixed operator-( const Fixed &a ) const;
    // increment 
    Fixed& operator++( void );
    Fixed& operator++( int nb );
    Fixed& operator--( void );
    Fixed& operator--( int nb );
    // static function
    static Fixed& max( Fixed& a, Fixed& b );
    static Fixed& min( Fixed& a, Fixed& b );
    const static Fixed& max( const Fixed& a, const Fixed& b );
    const static Fixed& min( const Fixed& a, const Fixed& b );
    Fixed abs( void );
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif