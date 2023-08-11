/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 07:01:31 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/09 09:42:20 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP


#include <iostream>
#include <cmath>
#include <math.h>
#include "Fixed.hpp"

class Point{
private :
    Fixed const x;
    Fixed const y;
public :
// constructor
    Point();
    Point( const float x, const float y );
    Point( Point& a );
    const Point& operator=( Point& original );
    ~Point();
// function
    const Fixed& get_x( void ) const;
    const Fixed& get_y( void ) const;
    static Fixed area(const Point &a, const Point &b, const Point& c);
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif