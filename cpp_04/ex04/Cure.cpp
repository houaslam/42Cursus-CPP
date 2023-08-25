/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:15:29 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/25 04:17:56 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria* Cure::clone() const{
    AMateria *res = new Cure;
    return res;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << " ’s wounds *\n";
}

Cure::Cure(void){
    this->type = "cure";
    std::cout << "Cure Default constructor id called!\n";
}

Cure::~Cure(void){
    std::cout << "Cure Destructor is called!\n";
}

Cure::Cure(Cure& cure){
    *this = cure;
    std::cout << "Copy constructor is called!\n";
}

Cure& Cure::operator=(Cure &cure)
{
    return *this;
}
