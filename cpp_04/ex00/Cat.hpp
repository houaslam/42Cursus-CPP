/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:18:52 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 19:20:54 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
public :
    void makeSound() const;
// DESTRUCTORE && CONSTRUCORE
    Cat();
    ~Cat();
    Cat(Cat &cat);
    Cat& operator=(const Cat& elem);
};

#endif
