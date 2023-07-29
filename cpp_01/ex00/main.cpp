/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/22 09:51:56 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie attr("foo");
    Zombie *another_one = newZombie("boo");
    randomChump("noo");
    another_one->announce();
    attr.announce();
    delete another_one;
}
