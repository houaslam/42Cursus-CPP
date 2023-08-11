/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 14:02:37 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructor and destructore
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout <<  "ScavTrap parameters constructore is called!\n";
}

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called\n";
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

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap  is now in Gate keeper mode\n";
}