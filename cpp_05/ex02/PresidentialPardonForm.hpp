/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:42 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:04:59 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public  AForm{
public :
    void execute(Bureaucrat const &executor) const;
    PresidentialPardonForm(Bureaucrat executor);
    ~PresidentialPardonForm();
};

#endif