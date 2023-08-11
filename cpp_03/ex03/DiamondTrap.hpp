/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:30:13 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 18:30:40 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap{
private :
    std::string name;
public :
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap& tocpy);
    DiamondTrap(void);
    ~ DiamondTrap(void);

    // regular
    void WhoAmI(void);  
} ;

#endif