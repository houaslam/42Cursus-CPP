/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 04:23:36 by hajarouasla       #+#    #+#             */
/*   Updated: 2023/08/25 06:27:40 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(){
	int k = 0;
	while(k < 4 && this->inventory[k] == NULL)
        delete this->inventory[k];
	delete inventory;
    std::cout << "Character Destructor called!\n";
}

std::string const & Character::getName() const{
    return this->name;
}

void Character::equip(AMateria* m){
    int k = 0;
    while(k < 4 && this->inventory[k] == NULL)
        this->inventory[k] = m;
}

void Character::unequip(int idx){
    if(idx > 4)
	{
		delete this->inventory[idx];	
        this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
    this->inventory[idx]->use(target);
}

Character::Character(std::string const &name){
    this->name = name;
}

Character::Character(){
    int i = 0;
    while(i < 4)
        this->inventory[i] = NULL;
    std::cout << "Character Default constructor is called!\n";
}

Character::Character(Character &src){
    *this = src;
}

Character& Character::operator=(Character &src){
	this->name = src.name;
	int k = 0;
	while(k < 4)
		this->inventory[k] = src.inventory[k];
	return *this;
}
