/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:59:23 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 17:10:24 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
public :
    void    makeSound() const;
//DESTRUCTORE && CONSTRUCTORE
    Dog();
    ~Dog();
    Dog(Dog &dog);
};

#endif