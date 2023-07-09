/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:40:30 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/13 15:39:47 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
	ClapTrap robin("robin");
	ScavTrap robot("robot");

	robin.printfinfo();
	robot.printfinfo();
	// robin.attack("cyborg");
	// robin.takeDamage(3);
	// robin.beRepaired(3);
	// robin.takeDamage(3);
	robot.attack("cyborg");
	robot.takeDamage(3);
	robot.beRepaired(3);
	robot.takeDamage(3);
	return 0; 
}