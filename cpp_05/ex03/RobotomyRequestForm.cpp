/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:12:53 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/14 12:16:39 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (this->GetSignStatus() != true)
        throw FormNotSigned();
    if (executor.getGrade() <= this->GetExec())
    {
        std::cout << "drilling noises.....!"<< std::endl;
        std::cout << executor.getName() << "has been robotomized seccessfully 50\% of the time" << std::endl;
    }
    else
        std::cout << "robotomy failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &pard) : target(pard.target){
    // std::cout << "RobotomyRequestForm copy constructore called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :AForm("Robotmy", 72,45) , target(target){
    // std::cout << "RobotomyRequestForm constructore called!\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){
        // std::cout << "RobotmyRequest Default destructore called!\n";
}


