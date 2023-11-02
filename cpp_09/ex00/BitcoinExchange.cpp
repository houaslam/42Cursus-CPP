/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:35:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/02 21:19:59 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(){
	// std::cout << "Bitcoin Default constructor called\n";
}

Bitcoin::~Bitcoin(){
	// std::cout << "Bitcoin Default destructor called\n";
}

Bitcoin::Bitcoin(Bitcoin& org){
	*this = org;
}

Bitcoin& Bitcoin::operator=(Bitcoin& org){
    if (this == &org)
        return *this;
	this->holder = org.holder;
    return *this;
}

void Bitcoin::display(void)
{
	std::map<std::string, int>::iterator it = holder.begin();
    while(it != holder.end()){
        std::cout << it->first << " : " << it->second << std::endl;
        it++;
    }

}

void Bitcoin::fillDate(std::string str){
    std::string year = str.substr(0, 4);
    std::string month = str.substr(5, 2);
    std::string day = str.substr(8, 2);
    std::string value = str.substr(13, str.length() - 13);

    int y = std::atoi(year.c_str());
    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());
    double v = std::atof(value.c_str());

    if (y < 2005 || d <= 0 || m <= 0 || d > 32 || m > 13 || v <= 0 || v > INT_MAX)
        throw std::out_of_range("date is not valid");
    this->holder[str.substr(0, 10).c_str()] = v;
}


