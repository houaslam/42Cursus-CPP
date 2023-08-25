/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:56:06 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/25 10:13:11 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type){
    this->type = type;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	
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
