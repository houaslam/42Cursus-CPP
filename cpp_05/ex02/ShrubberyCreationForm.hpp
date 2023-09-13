/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:02:33 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:04:39 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public  AForm{
public :
    void execute(Bureaucrat const &executor) const;
    ShrubberyCreationForm(Bureaucrat person);
    ~ShrubberyCreationForm();
};

#endif