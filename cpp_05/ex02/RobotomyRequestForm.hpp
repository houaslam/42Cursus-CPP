/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:01:41 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:04:18 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public  AForm{
public :
    void execute(Bureaucrat const &executor) const;
    RobotomyRequestForm(Bureaucrat person);
    ~RobotomyRequestForm();
};

#endif