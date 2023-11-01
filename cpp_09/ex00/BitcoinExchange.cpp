/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:35:16 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/31 18:00:09 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(){
	std::cout << "Bitcoin Default constructor called\n";
}

Bitcoin::~Bitcoin(){
	std::cout << "Bitcoin Default destructor called\n";
}

Bitcoin::Bitcoin(Bitcoin& org){
	*this = org;
}

Bitcoin& Bitcoin::operator=(Bitcoin& org){
	this->holder = org
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

    if (y < 2005 || d < 0 || m < 0 || d > 32 || m > 13 || v < 0 || v > INT_MAX)
        throw dateNotValid();
    this->older[str.substr(0, 10).c_str()] = v;
}

const char* Bitcoin::what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
    return "number not positive";
}

const char* Bitcoin::what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
    return "too large number";
}

const char* Bitcoin::what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
    return "format is not valid";
}

const char* Bitcoin::what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
    return "date is not valid";
}

