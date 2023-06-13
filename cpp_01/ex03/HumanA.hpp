/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:25:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/06 15:29:31 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
    public :
        std::string name;
        Weapon& weapon;
        void    attack(void);
        //constructore and destructore
        HumanA(std::string name, Weapon& weap);
        ~HumanA(void);
};

#endif