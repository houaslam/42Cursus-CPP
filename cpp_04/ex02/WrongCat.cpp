/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:34:49 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/24 10:53:29 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat :Meow Meow....!\n";
}
// DESTRUCTORE && CONSTRUCORE

WrongCat::WrongCat(){
	setType("WrongCat");
	std::cout << "WrongCAT Default constructor called!\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCAT Destructor called!\n";
}

WrongCat::WrongCat(WrongCat &Wrongcat){
	*this = Wrongcat;
	std::cout << "WrongCAT copy constructor called!\n";
}
