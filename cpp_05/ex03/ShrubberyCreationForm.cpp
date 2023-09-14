/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:00:45 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/14 12:23:40 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::ofstream my_stream;
	if (this->GetSignStatus() != true)
        throw FormNotSigned();
    if (executor.getGrade() <= this->GetExec())
        my_stream.open(executor.getName() + "_shrubbery");
    else
        std::cout << "robotomy failed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &pard)
:AForm(pard.GetName(), pard.GetSign(), pard.GetExec()), target(pard.target){
    // std::cout << "ShrubberyCreationForm copy constructore called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :AForm("Shrubbery", 145,137) , target(target){
    // std::cout << "ShrubberyCreationForm constructore called!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
        // std::cout << "ShrubberyCreation Default destructore called!\n";
}
