/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:08:09 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/23 18:18:07 by houaslam         ###   ########.fr       */
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
