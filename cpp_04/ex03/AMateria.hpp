/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:56:03 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/25 13:54:30 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
// DESTRUCTOR AND CONSTRUCTOR
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria &src);
	AMateria& operator=(AMateria &materia);

// REGULAR FUNCTION
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif