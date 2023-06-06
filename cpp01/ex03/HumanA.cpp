/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:26:08 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/04 18:44:02 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << name << "attacks with their" <<  weapon << std::endl;
}

HumanA::HumanA(std::string string, Weapon weap)
{
    name = string;
    weapon = weap.getType();
}

HumanA::~HumanA(void)
{
    return ;
}