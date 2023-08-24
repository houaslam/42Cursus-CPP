/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:43 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 10:52:14 by houaslam         ###   ########.fr       */
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
	virtual ~WrongAnimal(void);
//REGULAR FUNCTION
	virtual void		makeSound() const;
	void		setType(std::string name);
	const std::string	&getType(void) const;
};

#endif