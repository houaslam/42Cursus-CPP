/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:40:57 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/09 10:06:16 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point a(3, 1);
    Point b(1,3);
    Point c(4, 4);
    Point point(3, 3);

    if (bsp(a, b, c, point))
        std::cout << "the point is in the triangle\n";
    else
        std::cout << "the point is out the triangle\n";
    return 0;
}
