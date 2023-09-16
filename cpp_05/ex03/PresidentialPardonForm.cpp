/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:36 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/16 12:54:18 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	std::ofstream my_stream;
    if (this->GetSignStatus() != true)
        throw FormNotSigned();
    if (executor.getGrade() <= this->GetExec())
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw GradeTooHighException();   

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &pard) : target(pard.target){
    // std::cout << "PresidentialPardonForm copy constructore called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :AForm("Pardon", 25,5) , target(target){
    // std::cout << "PresidentialPardonForm constructore called!\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
        // std::cout << "PresidentialPardon Default destructore called!\n";
}

