/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:42 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 16:55:08 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public  Form{
public :
    void execute(Bureaucrat const &executor) const;
    PresidentialPardonForm(Bureaucrat executor);
    ~PresidentialPardonForm();
};

#endif