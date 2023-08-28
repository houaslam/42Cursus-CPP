/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 04:23:36 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/08/28 15:20:36 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(){
	int k = 0;
	while(k < 4 && this->inventory[k])
        delete this->inventory[k++];
    // std::cout << "Character Destructor called!\n";
}

std::string const & Character::getName() const{
    return this->name;
}

void Character::equip(AMateria* m){
    int k = 0;
    while(k < 4)
    {
        if (this->inventory[k] == NULL)
        {
            this->inventory[k] = m->clone();
            return ;
        }
        k++;
    }
}

void Character::unequip(int idx){
    if(idx < 4 && idx > 0 && this->inventory[idx])
	{
		delete this->inventory[idx];
        this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
}

Character::Character(std::string const &name){
    this->name = name;
    int i = 0;
    while(i < 4)
        this->inventory[i++] = NULL;
}

Character::Character(){
    int i = 0;
    while(i < 4)
        this->inventory[i++] = NULL;
    // std::cout << "Character Default constructor is called!\n";
}

Character::Character(Character &src){
    *this = src;
}

Character& Character::operator=(Character &src){
	this->name = src.name;
	int k = -1;
	while(++k < 4)
    {
        if (this->inventory[k])
            delete this->inventory[k];
		this->inventory[k] = src.inventory[k];
    }
	return *this;
}
