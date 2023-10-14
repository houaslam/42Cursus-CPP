/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/14 18:06:51 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try{
        Bureaucrat person("florence", 5);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        rrf->beSigned(person);
        rrf->execute(person);
        delete rrf;
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}