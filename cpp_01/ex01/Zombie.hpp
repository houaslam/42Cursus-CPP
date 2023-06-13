/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:32:07 by houaslam          #+#    #+#             */
/*   Updated: 2023/05/31 16:41:54 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>


class Zombie{
    std::string name;

    public :
    void announce( void );
    void naming(std::string name);
    Zombie(std::string name);
    Zombie(void);
    ~Zombie();
};

Zombie*    zombieHorde( int N, std::string name );
Zombie* newZombie(std::string name );