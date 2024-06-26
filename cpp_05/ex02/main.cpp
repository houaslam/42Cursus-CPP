/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/14 18:04:43 by houaslam         ###   ########.fr       */
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
        Bureaucrat bureau("florence", 1);
        ShrubberyCreationForm form("bureau");
        RobotomyRequestForm form2("bureau");
        PresidentialPardonForm form3("bureau");
        form.beSigned(bureau);
        form2.beSigned(bureau);
        form3.beSigned(bureau);
        bureau.signForm(form);
        bureau.signForm(form2);
        bureau.signForm(form3);
        bureau.executeForm(form);
        bureau.executeForm(form2);
        bureau.executeForm(form3);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}