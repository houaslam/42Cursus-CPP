/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:18:52 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 17:10:18 by houaslam         ###   ########.fr       */
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
};

#endif
