/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:35:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/04 13:50:49 by houaslam         ###   ########.fr       */
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
	this->holder = org.holder;
    return *this;
}

void    Bitcoin::checkValue(std::string str){
    std::string value = str.substr(13, str.length() - 13);
	std::string year = str.substr(0, 4);
    std::string month = str.substr(5, 2);
    std::string day = str.substr(8, 2);

	for (size_t i = 0; i < value.length() ; i++){
		if(!isdigit(value[i]) && value[i] != '.')
			throw std::runtime_error("date is not valid");}

	if (std::count(value.begin(), value.end(), '.') > 1)
			throw std::runtime_error("date is not valid");

    int y = std::atoi(year.c_str());
    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());
    double v = std::atof(value.c_str());

    if (y < 2005 || d <= 0 || m <= 0 || d > 32 || m > 13 || v <= 0 || v > INT_MAX){

        throw std::out_of_range("date is not valid");
	}
    
    std::map<std::string, double>::iterator it = holder.upper_bound(str.substr(0, 10)); 
    it--;
    // << std::fixed << std::setprecision(3) 
	std::cout << str.substr(0, 11) << " => ";
	std::cout << it->second * v << std::endl;

}

void Bitcoin::fillData(){
    std::ifstream data;

	data.open("./data.csv");
    std::string hold;

    std::getline(data, hold, '\n');
    while(std::getline(data, hold, '\n')){ 
        this->holder[hold.substr(0, 10)] = std::atof(hold.substr(11, hold.length() - 11).c_str());
    }
}


