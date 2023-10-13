/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/12 18:45:12 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat bureau("hajar", 150);
        std::cout << bureau;
        bureau.decrement();
        std::cout << bureau;

    }
    catch(Bureaucrat::GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(Bureaucrat::GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
}