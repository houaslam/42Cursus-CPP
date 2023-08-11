/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:48:19 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 17:54:27 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#ifndef ScavTrap_HPP
#define ScavTrap_HPP

class ScavTrap : virtual public ClapTrap{
    public :
        // constructor and destructore
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& tocpy);
        ScavTrap(void);
        ~ScavTrap(void);

        //function
        void guardGate(void);
};

#endif