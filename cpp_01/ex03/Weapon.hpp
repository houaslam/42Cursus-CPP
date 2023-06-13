/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:24:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/06/06 15:02:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{
  private :
    std::string weapon;

  public :
    const std::string& getType(void);
    void setType(std::string);

    //constructor and destructor
    Weapon(std::string weapon);
    Weapon(void);
    ~Weapon(void);
};

#endif