/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:25:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/06 18:12:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{
    public :
        std::string name;
        Weapon *weapon;
        void    attack(void);
        void    setWeapon(Weapon &weapon);
        //constructore and destructore
        HumanB(std::string name);
        ~HumanB(void);
};

#endif