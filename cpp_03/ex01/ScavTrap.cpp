/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/12 13:27:08 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructor and destructore
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout <<  "ScavTrap " 
    << this->name << " created with " 
    << this->hit << " hit "
    << this->energy << " energy "
    << this->damage << " damage\n";
}

ScavTrap::ScavTrap(void)
{
    return ;
}

ScavTrap::ScavTrap(ScavTrap& tocpy)
{
    *this = tocpy;
     std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout <<  "ScavTrap Destructore called\n";
}

void guardGate(void)
{
    std::cout << "ScavTrap  is now in Gate keeper mode\n";
}