/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:39:39 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 17:35:40 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << this->name;
    if (this->weapon)
    {
        std::cout << " attacks with their ";
        std::cout << this->weapon->getType() << std::endl;
    }
    else
        std::cout << " got no weapon\n";
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB(void)
{
    std::cout << this->name ;
    std::cout << " is dead\n";
}
