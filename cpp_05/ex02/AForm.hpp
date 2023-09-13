/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:55 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:10:05 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <stdbool.h>
#include <fstream>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
private:
  bool _sign;
  const int sign_grade;
  const int exec_grade;
  const std::string name;
public :
    // REGULAR FUNCTION
    AForm();
    ~AForm();
    const std::string GetName() const;
    const int GetSign() const;
    const int GetExec() const;
    bool GetSignStatus() const;
    virtual void execute(Bureaucrat const &executor) const = 0;
    void    beSigned(Bureaucrat person);
};
// std::ostream& operator<<(AForm form, std::ostream &stream);

#endif