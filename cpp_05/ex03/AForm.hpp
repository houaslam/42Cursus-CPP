/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:55 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/13 14:05:15 by houaslam         ###   ########.fr       */
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
    virtual ~AForm();
    AForm(AForm &form);
    AForm(const std::string name, int sign , int exec);
    const std::string GetName() const;
    const int GetSign() const;
    const int GetExec() const;
    bool GetSignStatus() const;
    virtual void execute(Bureaucrat const &executor) const = 0;
    void    beSigned(Bureaucrat person);
    class FormNotSigned : public std::exception{
      public :
      const char* what();
    };
	class GradeTooHighException : public std::exception{
		public :
		const char *what();
	};
	class GradeTooLowException : public std::exception{
   		public :
   		const char *what();
	};
};
// std::ostream& operator<<(AForm form, std::ostream &stream);

#endif