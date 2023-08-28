/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:09:37 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/28 15:20:51 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone(void) const{
    Ice *ret = new Ice(*this);
    return ret;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::Ice(void){
    this->type = "ice";
    // std::cout << "Ice Default constructor is called!\n";
}

Ice::~Ice(){
    // std::cout << "Ice Destructor is called!\n";
}

Ice::Ice(Ice const &ice){
    *this = ice;
}

Ice& Ice::operator=(Ice const &ice){
    (void)ice;
    return *this;
}
