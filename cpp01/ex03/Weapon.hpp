/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:24:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/04 18:38:53 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{
    private :
        std::string type;
    public :
        void setType(std::string name);
        std::string getType(void);
        Weapon(std::string Weapon);
        Weapon(void);
        ~Weapon(void);
};
#endif