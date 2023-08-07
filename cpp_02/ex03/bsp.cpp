/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 06:55:30 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 17:34:32 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"


Fixed Point::area(const Point &a, const Point &b, const Point& c)
{
    Fixed area;
    
    // std::cout << "a.x = "<< a.get_x() << " a.y = " << a.get_y() << std::endl;
    // std::cout << "b.x = "<< b.get_x() << " b.y = " << b.get_y() << std::endl;
    // std::cout << "c.x = "<< c.get_x() << " c.y = " << c.get_y() << std::endl;
    
    area = ((a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2).abs();
    return area;
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << "a.x = "<< a.get_x() << " a.y = " << a.get_y() << std::endl;
    std::cout << "b.x = "<< b.get_x() << " b.y = " << b.get_y() << std::endl;
    std::cout << "c.x = "<< c.get_x() << " c.y = " << c.get_y() << std::endl;
    Fixed res = area(a, b, c) ;
    std::cout << "area = " << res << std::endl;
    return true;
}
