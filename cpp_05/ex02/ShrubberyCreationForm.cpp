/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:00:45 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:11:34 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::ofstream my_stream;
	if (this->GetExec() <= 137 && this->GetSignStatus() == true)
		my_stream.open(executor.getName() + "_shrubbery");
	else
		throw GradeTooLowException();
}
