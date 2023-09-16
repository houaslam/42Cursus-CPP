/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:39:07 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/16 13:47:25 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* FormNotFound::what(){
    return "form not found among the following option {\n   presidential form\
    \n  robotomy form\n shrubbery form\n}\n";
}

AForm *Intern::makeForm(std::string form, std::string target){
    std::string strings[] = {"presidential form", "robotomy form", "shrubbery form"};
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
            return new ShrubberyCreationForm(target);
        case 2:
            return new RobotomyRequestForm(target);
        default:
            throw FormNotFound();
    }
    return NULL;
}
