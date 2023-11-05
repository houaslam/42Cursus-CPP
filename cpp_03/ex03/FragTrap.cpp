/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:25:47 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/05 13:20:59 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout <<  "FragTrap parameters constructore is called!\n";
}

FragTrap::FragTrap(FragTrap& tocpy) : ClapTrap(tocpy)
{
    std::cout << "FragTrap copy constructor called\n";
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::~FragTrap(void)
{
    std::cout <<  "FragTrap Destructore called\n";
}

    // regular
void highFivesGuys(void)
{
    std::cout <<  "HIGH FIVE\n";
}