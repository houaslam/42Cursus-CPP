/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/20 17:47:54 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <fixed_point.h>

class Fixed{
    private :
        int store;
        static const int fract;
    public :
        // constructor and destructore
        Fixed(const int elem);
        Fixed(const float elem);
        Fixed(void);
        Fixed(Fixed &elem);
        ~Fixed(void);

        //function
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        void operator=(Fixed &elem);
        // std::ostream &operator<<( std::ostream &output, const Fixed &D );
};

#endif