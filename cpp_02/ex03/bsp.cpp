/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 06:55:30 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 11:02:24 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
    unsigned int height;

    height = fabs(a.y.getRawBits() - c.y.getRawBits());
    std::cout << "height = " << height << std::endl;
    return true;
}