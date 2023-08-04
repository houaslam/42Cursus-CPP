/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:28:32 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 13:17:14 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
class  HumanA{
private :
    std::string name;
    Weapon &weapon;
public :
    //functions
    void    attack(void);
    // constructore
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
};

#endif