/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:57:00 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/08/26 09:10:21 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
    public:
			virtual ~IMateriaSource() {};
    		virtual void learnMateria(AMateria*) = 0;
    		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif