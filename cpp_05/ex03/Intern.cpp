/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:39:07 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/14 17:54:01 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* Intern::FormNotFound::what(){
    return "form not found among the following option {\n   presidential request\
    \n  robotomy request\n shrubbery request\n}\n";
}

AForm *Intern::makeForm(std::string form, std::string target){
    std::string strings[] = {"presidential request", "robotomy request", "shrubbery request"};
    int k = 0;
    while(k < 3)
    {
        if (!strings[k].compare(form))
            break;
        k++;
    }
    
    switch(k){
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
            throw FormNotFound();
    }
    return NULL;
}
