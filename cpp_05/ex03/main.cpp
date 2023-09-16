/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/16 13:46:04 by houaslam         ###   ########.fr       */
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
{
    Bureaucrat person("florence", 5);
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("presidenvtial form", "Bender");
    rrf->beSigned(person);
    rrf->execute(person);
    delete rrf;
    // std::cout << rrf << std::endl;
}
    }
    catch(GradeTooHighException &exep){
        std::cout << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cout << "exep : " << exep.what();
    }
    catch(FormNotSigned &exep){
        std::cout << "exep : " << exep.what();
    }
    catch(FormNotFound &exep){
        std::cout << "exep : " << exep.what();
    }
}