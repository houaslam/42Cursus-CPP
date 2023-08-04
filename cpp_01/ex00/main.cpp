/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 07:54:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("foo");
    Zombie *another_one = newZombie("boo");
    randomChump("noo");
    another_one->announce();
    zombie.announce();
    delete another_one;
}
