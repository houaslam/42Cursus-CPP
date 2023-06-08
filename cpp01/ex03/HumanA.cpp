/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:26:08 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/06 15:31:10 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << this->weapon.getType() << std::endl;
}
HumanA::HumanA(std::string string, Weapon& ref) : name(string), weapon(ref)
{
   std::cout << "human constructore called" << std::endl;
}
HumanA::~HumanA(void)
{
    std::cout << "human destructore called" << std::endl;
}