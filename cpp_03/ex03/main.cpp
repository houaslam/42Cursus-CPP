/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:40:30 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 18:33:54 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) 
{
	ClapTrap robin("robin");
	ScavTrap robot("cyborg");
	FragTrap fish("animal");
	DiamondTrap cat("atlantic");

	// fish.attack("cyborg");
	cat.attack("cyborg");
	// robin.attack("cyborg");
	// robot.takeDamage(3);
	// robot.attack("robin");
	// robin.takeDamage(3);
	cat.WhoAmI();
	return 0; 
}