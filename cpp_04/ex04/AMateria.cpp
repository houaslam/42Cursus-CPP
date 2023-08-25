/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:56:06 by houaslam          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/08/25 04:11:02 by hajarouasla      ###   ########.fr       */
=======
/*   Updated: 2023/08/25 10:13:11 by houaslam         ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
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
<<<<<<< HEAD
{}
=======
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
>>>>>>> refs/remotes/origin/master
