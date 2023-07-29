/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:31:31 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/22 09:28:18 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string zombie )
{
    name = zombie;
    std::cout << name << " is back to life\n";
}

Zombie::Zombie( void )
{
    std::cout << "Default constructor\n";
}

Zombie::~Zombie()
{
    std::cout << "Default destructor\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie(std::string name )
{
    Zombie *OBJ = new Zombie(name);
    OBJ->announce();
    return(OBJ);
}
