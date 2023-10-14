/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:00:45 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/14 15:17:36 by houaslam         ###   ########.fr       */
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
    {
        std::cout << "shrubby failed" << std::endl;
        exit(1);
    }
    my_stream << "    oxoxoo    ooxoo "  << std::endl;
    my_stream << "  ooxoxo oo  oxoxooo " << std::endl;
    my_stream << " oooo xxoxoo ooo ooox " << std::endl;
    my_stream << " oxo o oxoxo  xoxxoxo " << std::endl;
    my_stream << "  oxo xooxoooo o ooo " << std::endl;
    my_stream << "    ooo\\oo\\  /o/o " << std::endl;
    my_stream << "        \\  \\/ / " << std::endl;
    my_stream << "         |   / " << std::endl;
    my_stream << "         |  | " << std::endl;
    my_stream << "         | D| " << std::endl;
    my_stream << "         |  | " << std::endl;
    my_stream << "         |  | " << std::endl;
    my_stream << "  ______/____\\____ " << std::endl;
    std::cout << executor.getName() + "_shrubbery" << " file was created\n";
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
