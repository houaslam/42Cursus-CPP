/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/29 17:21:23 by houaslam         ###   ########.fr       */
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
        std::cerr << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
}