/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/13 14:07:57 by houaslam         ###   ########.fr       */
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
    rrf = someRandomIntern.makeForm("shrubbery form", "Bender");
    rrf->beSigned(person);
    rrf->execute(person);
    delete rrf;
    // std::cout << rrf << std::endl;
}
    }
    catch(Bureaucrat::GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(Bureaucrat::GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(AForm::GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(AForm::GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(AForm::FormNotSigned &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(Intern::FormNotFound &exep){
        std::cerr << "exep : " << exep.what();
    }
}