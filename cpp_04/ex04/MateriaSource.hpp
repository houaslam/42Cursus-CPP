/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:57:00 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/08/25 09:33:58 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOUCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
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