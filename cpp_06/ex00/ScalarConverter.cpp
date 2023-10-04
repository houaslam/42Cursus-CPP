/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:49:03 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/29 17:22:23 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConveter::ScalarConveter(){
    std::cout << "ScalarConverter Default constructore called!\n";
}
  
ScalarConveter::ScalarConveter(ScalarConveter &to_cpy){
	std::cout << "Copy constructore Called!\n";
}
  
ScalarConveter& ScalarConveter::operator=(ScalarConveter &to_cpy){
	return *this;
}

ScalarConveter::~ScalarConveter(){
	std::cout << "Scalar Destructore called!\n";
}


void ScalarConveter::method(const char* base){
    std::cout << std::fixed << std::setprecision(2);
	try{
        std::cout << "char = '";
        char c_value = static_cast<char>(std::stoi(base));
        if (c_value <= 31)
			std::cout << "non displayable'" << std::endl;
		else
        	std::cout << c_value <<  "\'"<< std::endl;
	}
    catch (std::invalid_argument){
        std::cerr << "impossible'\n";
    }
    try{
    	std::cout << "int = ";
        int i_value = std::stoi(base);
		std::cout <<  i_value << std::endl;
	}
    catch (std::invalid_argument){
        std::cerr << "impossible\n";
    }
    try{
        std::cout << "float = " ;
        float f_value = std::stof(base);
		std::cout << f_value << "f" << std::endl;
	}
    catch (std::invalid_argument){
        std::cerr << "impossible\n";
    }
	try{
        std::cout << "double = ";
        double d_value = std::stod(base);       
        std::cout << d_value << std::endl;
	}
    catch (std::invalid_argument){
        std::cerr << "impossible\n";
    }
}
