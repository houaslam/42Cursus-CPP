/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:09:37 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 14:14:56 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone(void) const{
    AMateria *ret = new Ice;
    return ret;
}

Ice::Ice(void){
    this->type = "ice";
    std::cout << "Ice Default constructor is called!\n";
}

Ice::~Ice(){
    std::cout << "Ice Destructor is called!\n";
}
