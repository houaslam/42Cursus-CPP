/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:26:53 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 13:27:25 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << this->name ;
    std::cout << " attacks with their ";
    std::cout << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA(void)
{
    std::cout << this->name ;
    std::cout << " is dead\n";
}