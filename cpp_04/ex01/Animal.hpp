/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:43 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 17:28:03 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
protected :
	std::string type;
public :
	Animal(void);
	Animal(std::string type);
	Animal(Animal &to_copy);
	Animal& operator=(const Animal& elem);
	virtual ~Animal(void);
//REGULAR FUNCTION
	virtual void		makeSound() const;
	void		setType(std::string name);
	const std::string	&getType(void) const;
};

#endif