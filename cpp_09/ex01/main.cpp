/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:10 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/04 18:38:44 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isoperator(char c){
    if (c == '+' || c == '-' || c == '/' || c== '*')
        return true;
    return false;
}

int main(int ac, char **av){
    if(ac == 2)
    {
        std::string nb = av[1];
        RPN rpn;
		try{
        	for(size_t i=0;i < nb.length(); i++){
        	    if (isdigit(nb[i]))
        	        rpn.insert_nb(std::atoi(&nb[i]));
        	    else if (isoperator(nb[i]))
        	        rpn.operation(nb[i]);
        	    else if (nb[i] != ' ')
        	        throw std::runtime_error("Error");
        		}
        	if (rpn._size() > 1)
            	throw std::runtime_error("Error");
        	std::cout << rpn.result() << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
}