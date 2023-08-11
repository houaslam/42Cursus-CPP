/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:30:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 19:01:05 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "name " << this->name << std::endl;
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	std::cout << "DiamondTrap parametrs constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap& tocpy)
{
	*this = tocpy;
    std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout <<  "DiamondTrap Destructore called\n";
}

// regular
void DiamondTrap::WhoAmI(void)
{
	std::cout << "DIAMONDTRAP = " << this->name << std::endl;
	std::cout << "CLAPTRAP = " << ClapTrap::name << std::endl;
}