/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:36 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 16:38:42 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() <= 5 && this->GetSignStatus() == true)
        std::cout << executor.getName() << "has benn pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw GradeTooHighException();   
}
