/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:59:23 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 18:40:56 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private :
    Brain *brain;
public :
    void    makeSound() const;
//DESTRUCTORE && CONSTRUCTORE
    Dog();
    ~Dog();
    Dog(Dog &dog);
    Dog& operator=(Dog &src);
};

#endif