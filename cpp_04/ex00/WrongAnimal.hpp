/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:43 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 09:50:30 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected :
	std::string type;
public :
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal &to_copy);
	WrongAnimal& operator=(const WrongAnimal& elem);
	~WrongAnimal(void);
//REGULAR FUNCTION
	void		makeSound() const;
	void		setType(std::string name);
	const std::string	&getType(void) const;
};

#endif