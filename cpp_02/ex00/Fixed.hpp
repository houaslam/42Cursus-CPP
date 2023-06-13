/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/12 13:19:15 by houaslam         ###   ########.fr       */
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
        // constructor and destructore
        Fixed(void);
        Fixed(Fixed &elem);
        ~Fixed(void);

        //function
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        void operator=(Fixed &elem);
};

#endif