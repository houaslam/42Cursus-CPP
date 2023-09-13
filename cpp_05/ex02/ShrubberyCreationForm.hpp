/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:02:33 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 16:05:59 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public : Form{
public :
    void execute(Bureaucrat const &executor) const
    ShrubberyCreationForm(Bureacrat person);
    ~ShrubberyCreationForm();
};

#endif