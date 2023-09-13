/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:01:41 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 16:55:10 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public  Form{
public :
    void execute(Bureaucrat const &executor) const;
    RobotomyRequestForm(Bureaucrat person);
    ~RobotomyRequestForm();
};

#endif