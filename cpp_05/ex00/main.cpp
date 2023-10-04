/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:56 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/29 17:21:06 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat bureau("hajar", 0);
        std::cout << bureau;
    }
    catch(GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
}