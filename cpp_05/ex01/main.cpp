/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/12 18:49:06 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Form form("smtg", 2, 8);
        Bureaucrat bureau("florence", 4);
        try
        {
        form.beSigned(bureau);
        }
        catch(Form::GradeTooHighException &exep)
        {
            std::cerr << "exep : " << exep.what();
        }
        catch(Form::GradeTooLowException &exep)
        {
            std::cerr << "exep : " << exep.what();
        }
        bureau.signForm(form);
    }
    catch(Bureaucrat::GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(Bureaucrat::GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
}