/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:59:42 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/19 12:17:45 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "Serializer Default constructore called!\n";
}

Serializer::~Serializer(){
	std::cout << "Serializer Destructore called!\n";
}

Serializer::Serializer(Serializer &to_cpy){
	*this= to_cpy;
}

Serializer& Serializer::operator=(Serializer& to_cpy){
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}