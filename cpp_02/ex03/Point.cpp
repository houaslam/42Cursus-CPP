/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 07:01:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 11:38:59 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

const Fixed& Point::get_x()
{
    return (this->x);
}

const Fixed& Point::get_y()
{
    return (this->y);
}

Point::Point(): x(0), y(0)
{
    std::cout << "default constructor called\n";
    std::cout << x.getRawBits()<< "\n";
}

Point::Point( const Fixed& x, const Fixed& y ) : x(x), y(y)
{
    std::cout << "parameters constructor called\n";
}

Point::Point( Point& a ) : x(a.get_x()) , y(a.get_x())
{
    std::cout << "copy constructor constructor called\n";
    
}

Point::~Point()
{
    std::cout << "destructor called\n";
}
