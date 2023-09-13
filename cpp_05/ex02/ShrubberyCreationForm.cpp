/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:00:45 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 16:11:35 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	ofstream out;
	if (this->GetExec() <= 137)
		out.open(executor + "_shrubbery");
	else
		throw GradeTooLowException();
}
