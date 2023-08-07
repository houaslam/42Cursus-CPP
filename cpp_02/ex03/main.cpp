/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:40:57 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/07 17:35:06 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{ 
    Fixed b(3);
    Fixed c(4);
    Fixed d(1);
    Point res;

    Point a(b, c); // (3, 4)
    Point k(c, b); // (4, 3)
    Point l(c, d); // (3, 1)
    std::cout << "a.x = "<< a.get_x() << " a.y = " << a.get_y() << std::endl;
    std::cout << "b.x = "<< b.get_x() << " b.y = " << b.get_y() << std::endl;
    std::cout << "c.x = "<< c.get_x() << " c.y = " << c.get_y() << std::endl;
    // std::cout << "x = " << a.get_x() << " y = " << a.get_y() << std::endl;
    res.bsp(&a, &k, &l, l);
    return 0;
}