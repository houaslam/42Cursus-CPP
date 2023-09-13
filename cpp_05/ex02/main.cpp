/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:05:25 by hajarouasla      ###   ########.fr       */
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
        Bureaucrat bureau("florence", 4);
        RobotomyRequestForm form(bureau);
        form.beSigned(bureau);
        bureau.signForm(form);
    }
    catch(GradeTooHighException &exep){
        std::cout << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cout << "exep : " << exep.what();
    }
}