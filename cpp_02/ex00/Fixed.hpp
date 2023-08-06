/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/05 08:06:20 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    private :
        int store;
        static const int fract;
    public :
        // canonical form
        Fixed(void);
        Fixed(Fixed &elem);
        ~Fixed(void);
        Fixed& operator=(Fixed &elem);

        //function
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};

#endif