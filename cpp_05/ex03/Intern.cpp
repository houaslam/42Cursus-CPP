/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:39:07 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/14 15:56:18 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* FormNotFound::what(){
    return "form not found!\n";
}

AForm *Intern::makeForm(std::string form, std::string target){
    std::string strings[] = {"presidential form", "robotomy form", "shrubbery form"};
    int k = 0;
    while(k < 3)
    {
        std::cout << "----> " << strings[k] << std::endl;
        if (!strings[k].compare(form))
            break;
        k++;
    }
    // exit(0);
    switch(k){
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new ShrubberyCreationForm(target);
        case 3:
            return new RobotomyRequestForm(target);
        default:
            throw FormNotFound();
    }
    return NULL;
}
