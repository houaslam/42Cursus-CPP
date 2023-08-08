/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:40:57 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/08 08:18:57 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{ 
    Fixed x(3);
    Fixed y(4);
    Fixed z(1);
    Fixed m(2);
    Point res;

    Point a(x, z);
    Point b(m, m);
    Point c(y, x);
    Point point(x, m);
    if (res.bsp(a, b, c, point))
        std::cout << "the point is in the triangle\n";
    else
        std::cout << "the point is out the triangle\n";
    return 0;
}
