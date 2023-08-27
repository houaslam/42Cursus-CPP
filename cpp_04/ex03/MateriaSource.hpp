/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:57:00 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/08/27 12:33:13 by houaslam         ###   ########.fr       */
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