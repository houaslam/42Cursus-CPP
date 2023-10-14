/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/14 15:01:15 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name )
{
    Zombie *obj;
    
    obj = new Zombie(name);
    if (obj == 0)
    {
        std::cerr << "ALLOCATION PROBLEM" << std::endl;
        exit(0);
    }
    return(obj);
    
}