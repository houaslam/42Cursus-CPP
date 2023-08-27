/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:08:09 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/26 19:16:37 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called!\n";
}

Brain::~Brain(){
	std::cout << "Brain Destructor called!\n";
}
    
Brain::Brain(Brain &ref){
	*this = ref;
	std::cout << "Brain copy constructor called!\n";
}

Brain& Brain::operator=(Brain &ref){
	int k = -1;
	while(++k < 100)
		this->ideas[k] = ref.ideas[k];
	return *this;
}
