/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:42 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/14 12:12:59 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public  AForm{
private :
    const std::string target;
public :
    void execute(Bureaucrat const &executor) const;
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm &pard);
    ~PresidentialPardonForm();
};

#endif