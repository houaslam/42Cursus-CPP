/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 06:55:30 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/09 10:05:51 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Fixed Point::area(const Point &a, const Point &b, const Point& c)
{
    return ((a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * \
    (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2).abs();
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
    Fixed tg = Point::area(a, b, c);
    Fixed a1 = Point::area(a, b, p);
    Fixed a2 = Point::area(a, c, p);
    Fixed a3 = Point::area(b, c, p);

    if (a1 == 0 || a2 == 0 || a3 == 0)
        return false;
    if (a1 + a2+ a3 == tg)
        return true;
    return false;
}
