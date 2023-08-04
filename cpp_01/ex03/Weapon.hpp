/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:21:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/04 17:33:40 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
private :
    std::string type;
public :
	const std::string& getType(void);
	void setType(std::string type);
	//constructore
	Weapon(std::string name);
	~Weapon();
};

#endif