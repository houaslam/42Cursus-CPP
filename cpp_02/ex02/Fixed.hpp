/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/26 15:49:43 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <stdio.h>

class Fixed{
    private :
        int store;
        static const int fract;
    public :
        // constructor and destructore
        Fixed(const int elem);
        Fixed(const float elem);
        Fixed(void);
        Fixed(Fixed const &elem);
        ~Fixed(void);

        //function
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        void operator=(Fixed &elem );
        //comparison
        int operator>(Fixed &elem );
        int operator<(Fixed &elem );
        int operator>=(Fixed &elem );
        int operator<=(Fixed &elem );
        int operator==(Fixed &elem );
        int operator!=(Fixed &elem );
        //arithmetic
        Fixed operator+(Fixed &elem );
        Fixed operator-(Fixed &elem );
        Fixed operator*(Fixed &elem );
        Fixed operator/(Fixed &elem );
        //increment
        Fixed &operator++(void);
        Fixed &operator--(void);
        // Fixed &operator--(int);
        // Fixed &operator++(int);
        // //static memeber
        Fixed &min(Fixed &elem , Fixed &other);
        Fixed &max(const Fixed &elem , Fixed &other);
        // Fixed &min(Fixed &elem , const Fixed &other);
        // Fixed &max(const Fixed &elem , const Fixed &other);
};
std::ostream& operator<<(std::ostream& output, const Fixed& D);

#endif