/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:30:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/04 18:45:24 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "name " << this->name << std::endl;
	this->hit = FragTrap::hit;
	std::cout << "hit point = " << FragTrap::hit << std::endl;
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