/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:35:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/03 18:07:20 by houaslam         ###   ########.fr       */
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

void Bitcoin::display(void)
{
	std::map<std::string, double>::iterator it = holder.begin();
    while(it != holder.end()){
        std::cout << std::fixed << std::setprecision(3) << it->first << " : " << it->second << std::endl;
        it++;
    }

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
    std::map<std::string, double>::iterator it = std::lower_bound(holder.begin(), holder.end(), str.substr(0, 10)); 
	std::cout << std::fixed << std::setprecision(3) << str.substr(0, 11) << " => " << \
	it->second * v<< std::endl;
    // std::cout << std::fixed << std::setprecision(3) << str.substr(0, 11) << " => " << 
	// holder[str.substr(0, 10)] * v<< std::endl;

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


