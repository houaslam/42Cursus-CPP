/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:37:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/05/31 16:52:09 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::naming(std::string nam)
{
    name = nam;
}

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *Zombie_sequence = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        Zombie_sequence[i].naming("zombie");
        Zombie_sequence[i].announce();
        i++;
    }
    return(Zombie_sequence );
}