/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:26:08 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/06 18:13:00 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << this->weapon->getType() << std::endl;
}
HumanB::HumanB(std::string string) : name(string)
{
    std::cout << "human constructore called" << std::endl;
}
HumanB::~HumanB(void)
{
    std::cout << "human destructore called" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
