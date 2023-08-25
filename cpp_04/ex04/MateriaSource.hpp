/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:57:00 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/08/25 13:54:49 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
	AMateria *inventory[4];
// DESTRUCTOR AND CONSTRUCTOR
			~MateriaSource();
			MateriaSource();
			MateriaSource(MateriaSource &src);
			MateriaSource& operator=(MateriaSource &src);
// REGULAR FUNCTION
    		virtual void learnMateria(AMateria*);
    		virtual AMateria* createMateria(std::string const & type);
};

#endif