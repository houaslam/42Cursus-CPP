/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/12 13:19:15 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap{
    private :
        std::string name;
        int hit;
        int energy;
        int damage;
    
    public :
        // constructor and destructore
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& tocpy);
        ClapTrap(void);
        ~ClapTrap(void);

        //function
        void printfinfo(void)
        {
            std::cout << "name : " << this->name  << std::endl
            << "hit : " << this->hit << std::endl
            << "energy : " << this->energy  << std::endl
            << "damage : " << this->damage << std::endl;
        }
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap& operator=(const ClapTrap& elem);
};

#endif