/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:26:08 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/29 09:51:47 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    if (weapon->getType().empty())
    {
        std::cout << "NEED TO SET A WEAPON FIRST" << std::endl;
        return ;
    }
    exit(0);
    std::cout << this->name;
    std::cout << " attacks with their ";
    std::cout << this->weapon->getType() << std::endl;
}
HumanB::HumanB(std::string string) : name(string)
{
    weapon->setType("");
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
