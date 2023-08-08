/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:40:30 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/08 08:58:35 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) 
{
	ClapTrap robin("robin");
	ScavTrap robot("cyborg");

	robin.attack("cyborg");
	robot.takeDamage(3);
	robot.attack("robin");
	robin.takeDamage(3);
	return 0; 
}