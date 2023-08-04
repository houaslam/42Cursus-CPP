/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:40:52 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 17:35:33 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{
private :
    std::string name;
    Weapon *weapon;
public :
    //function
    void attack();
    void setWeapon(Weapon &weapon);
    //constructor
    HumanB(std::string name);
    ~HumanB();
};

#endif