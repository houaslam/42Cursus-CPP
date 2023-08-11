/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:29:32 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/11 17:54:18 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap{
public :
    FragTrap(std::string name);
    FragTrap(FragTrap& tocpy);
    FragTrap(void);
    ~FragTrap(void);

    // regular
    void highFivesGuys(void);  
};

#endif