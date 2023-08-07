/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:40:57 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 11:57:04 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{ 
    Fixed b(3);
    Fixed c(4);
    Fixed d(1);

    Point a(b, c); // (3, 4)
    Point k(c, b); // (4, 3)
    Point l(c, d); // (3, 1)
    std::cout << "x = " << a.get_x() << " y = " << a.get_y() << std::endl;
    std::cout << "height = " << fabs(k.get_y().getRawBits() - a.get_y().getRawBits()) << std::endl;
    return 0;
}