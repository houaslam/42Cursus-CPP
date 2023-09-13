/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 12:05:16 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Form form("smtg", 5, 8);
        Bureaucrat bureau("florence", 4);
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