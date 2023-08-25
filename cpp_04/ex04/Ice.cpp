/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:09:37 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/25 04:16:18 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone(void) const{
    AMateria *ret = new Ice;
    return ret;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at" << target.getName() << " *\n";
}

Ice::Ice(void){
    this->type = "ice";
    std::cout << "Ice Default constructor is called!\n";
}

Ice::~Ice(){
    std::cout << "Ice Destructor is called!\n";
}

Ice::Ice(Ice &ice)
{
    *this = ice;
}

Ice& Ice::operator=(Ice &ice){
    return *this;
}
