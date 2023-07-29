/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:28:06 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/25 06:51:10 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
    return(this->weapon);
}

void Weapon::setType(std::string weapon)
{
    this->weapon = weapon;
}

//constructor and destructor

Weapon::Weapon(std::string weapon)
{
    this->weapon = weapon;
    std::cout << "weapon constructore called" << std::endl;
}
Weapon::Weapon(void)
{
    std::cout << "weapon constructore called" << std::endl;
}
Weapon::~Weapon(void)
{
    std::cout << "weapon destructore called" << std::endl;
}