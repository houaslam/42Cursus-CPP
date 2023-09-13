/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:55 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 16:07:13 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <stdbool.h>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
  bool _sign;
  const int sign_grade;
  const int exec_grade;
  const std::string name;
public :
    ~Form();
    Form();
    Form(const char*name, int sign);
    const int GetExec() const;
    bool GetSignStatus() const;
    virtual void execute(Bureaucrat  , int exec);
    // REGULAR FUNCTION
    const std::string GetName() const;
    const int GetSign() const;
    const int GetExec() const;
    bool GetSignStatus() const;
    virtual void execute(Bureaucrat const &executor) const = 0;
    void    beSigned(Bureaucrat person);
};
std::ostream& operator<<(Form form, std::ostream &stream);

#endif