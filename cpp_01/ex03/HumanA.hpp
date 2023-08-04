/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:25:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 09:01:32 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
    private :
        std::string name;
    public :
        Weapon& weapon;
        void    attack(void);
        //constructore and destructore
        HumanA(std::string name, Weapon& weap);
        ~HumanA(void);
};

#endif