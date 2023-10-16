/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:28:57 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/16 16:45:06 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string nname) : name(nname){
    // std::cout<<"Data constructor called!\n";
}

Data::Data() : name(""){
    // std::cout<< "Data consstructor called!\n";
}
Data& Data::operator=(Data& src){
    this->name = src.name;
    return *this;
}

Data::Data(Data& data){
    *this = data;
}

Data::~Data(){
    // std::cout << "Data Destructore is called!\n";
}