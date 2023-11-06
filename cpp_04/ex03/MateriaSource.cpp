/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:57:00 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/11/06 12:56:01 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::~MateriaSource(){
		int k = 0;
	while(k < 4 && this->inventory[k] == NULL)
        delete this->inventory[k++];
    // std::cout << "MateriaSource Destructor called!\n";
}

void MateriaSource::learnMateria(AMateria* src){
	int k = 0;
    while(k < 4)
    {
        if (this->inventory[k] == NULL)
        {
            this->inventory[k] = src;
            return ;
        }
        k++;
    }
}

AMateria*  MateriaSource::createMateria(std::string const & type){
	int k = 0;
    AMateria *ret;
    while(k < 4)
    {
        if (this->inventory[k] && !this->inventory[k]->getType().compare(type))
        {
            ret = this->inventory[k]->clone(); // -> ice.clone()
            return (ret);
        }
        k++;
    }
	return NULL;
}

MateriaSource::MateriaSource(){
	int i = 0;
    while(i < 4)
        this->inventory[i++] = NULL;
    // std::cout << "Character Default constructor is called!\n";
}

MateriaSource::MateriaSource(MateriaSource &src){
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource &src){
	int k = -1;
	while(++k < 4)
		this->inventory[k] = src.inventory[k];
	return *this;
}
