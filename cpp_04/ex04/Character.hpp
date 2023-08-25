/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:59:39 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/25 06:30:04 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string name;
		AMateria *inventory[4];
    public:
// DESTRUCTOR AND CONSTRUCTOR
    	virtual ~Character();
    	Character(std::string const &name);
    	Character();
    	Character(Character &src);
    	Character& operator=(Character &src);
// REGULAR FUNCTION
        virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};
	
#endif