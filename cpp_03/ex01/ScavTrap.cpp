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
    std::cout <<  "ScavTrap Parameter constructore called\n";
}

ScavTrap::ScavTrap(void)
{
    std::cout <<  "ScavTrap Default constructore called\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout <<  "ScavTrap Destructore called\n";
}

void guardGate(void)
{
    std::cout << "ScavTrap  is now in Gate keeper mode\n";
}