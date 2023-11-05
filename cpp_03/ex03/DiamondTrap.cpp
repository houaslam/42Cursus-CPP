/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:30:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/05 13:20:48 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name),  FragTrap(name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hit = FragTrap::hit;
	std::cout << "HIT = " << this->hit << std::endl;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	std::cout << "DiamondTrap parametrs constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap& tocpy) : ClapTrap(tocpy) , ScavTrap(tocpy),  FragTrap(tocpy)
{
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