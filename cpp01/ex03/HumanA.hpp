/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:25:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/04 18:42:34 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
        std::string name;
        std::string  weapon;
    public :
        HumanA(std::string sting, Weapon ob);
        void    attack(void);
        ~HumanA(); 
};

#endif