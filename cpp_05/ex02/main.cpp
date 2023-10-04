/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/29 17:21:47 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try{
        Bureaucrat bureau("florence", 100);
        ShrubberyCreationForm form("bureau");
        ShrubberyCreationForm s_form(form);
        RobotomyRequestForm form2("bureau");
        PresidentialPardonForm form3("bureau");
        form.beSigned(bureau);
        s_form.beSigned(bureau);
        form2.beSigned(bureau);
        form3.beSigned(bureau);
        bureau.signForm(form);
        bureau.signForm(s_form);
        bureau.signForm(form2);
        bureau.signForm(form3);
        bureau.executeForm(form);
        bureau.executeForm(s_form);
        bureau.executeForm(form2);
        bureau.executeForm(form3);
    }
    catch(GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(FormNotSigned &exep){
        std::cerr << "exep : " << exep.what();
    }
}