/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:56:06 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/25 13:34:50 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//CANONICAL FORM 
AMateria::AMateria(std::string const & type){
    this->type = type;
}

AMateria::AMateria(){
	std::cout << "AMateria Default constructor is called!\n";
}

AMateria::~AMateria(){
	std::cout << "AMateria Destructor is called!\n";
}

AMateria::AMateria(AMateria &src){
	*this = src;
	std::cout << "AMateria copy constructor is called!\n";
}

AMateria& AMateria::operator=(AMateria &materia){
	this->type = materia.type;
	return *this;
}

// REGULAR FUNCTION
std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria is used on " << target.getName(); 
}
