/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:12:53 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:28:05 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    
    if (executor.getGrade() <= 45 && this->GetSignStatus() == true)
    {
        std::cout << "drilling noises.....!"<< std::endl;
        std::cout << executor.getName() << "has been robotomized seccessfully 50\% of the time" << std::endl;
    }
    else
        std::cout << "robotomy failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &person){
    std::cout << person.getName();
}

RobotomyRequestForm::~RobotomyRequestForm(){
        std::cout << "ntg\n";
}


