/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:42:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 13:50:47 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructor and destructore
ClapTrap::ClapTrap(std::string name) : name(name) , hit(10), energy(10), damage(0)
{
    std::cout <<  "ClapTrap parameters constructore is called!\n";
}

ClapTrap::ClapTrap(void)
{
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout <<  "ClapTrap Destructore called\n";
}


//function
void ClapTrap::attack(const std::string& target)
{
    if(this->energy > 0)
    {
        this->energy--;
        std::cout << this->name 
        << " attacks " << target << std::endl;
    }
    else
        std::cout << this->name <<  " has no energy\n" ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit <= amount)
    {
        std::cout <<  "ClapTrap " 
        << this->name << " is dead\n";
        return ;
    }
    std::cout << this->name << " lost " << amount << std::endl;
    this->hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy > 0)
    {
        this->hit += amount;
        this->energy--;
        std::cout <<  "ClapTrap " 
        << this->name 
        << " repaired himself with "
        << amount << " hit point\n";
    }
    else
        std::cout << this->name <<  " has no energy\n" ;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& elem)
{
    std::cout << "Copy assignment operator called\n";
    this->name = elem.name;
    this->hit = elem.hit;
    this->damage = elem.damage;
    this->energy = elem.energy;
    return *this;
}

ClapTrap::ClapTrap(ClapTrap& tocpy)
{
    *this = tocpy;
     std::cout << "ClapTrap copy constructor called\n";
}