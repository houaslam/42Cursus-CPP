/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/08 08:44:32 by houaslam         ###   ########.fr       */
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
        ClapTrap& operator=(const ClapTrap& elem);

        //function
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif