/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:28:06 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/04 16:57:49 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string name)
{
    type = name;
}

std::string Weapon::getType(void)
{
    return(type);
}


Weapon::Weapon(std::string Weapon)
{
    type = Weapon;
}
Weapon::~Weapon(void)
{
    std::cout << "default constructor called ....."<< std::endl;
}