/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:37:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/25 06:31:34 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::naming(std::string name)
{
    this->name = name;
}

Zombie*    zombieHorde( int N, std::string name )
{
    int i;
    
    i = 0;
    if (N <= 0)
        return (NULL);
    Zombie *Zombie_sequence = new Zombie[N];
    if (!Zombie_sequence)
        return (NULL);
    while (i < N)
    {
        Zombie_sequence[i].naming(name);
        Zombie_sequence[i].announce();
        i++;
    }
    return(Zombie_sequence );
}