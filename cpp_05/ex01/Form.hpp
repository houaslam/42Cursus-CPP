/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:55 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/13 13:58:52 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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
    Form(Form &form);
    Form(const std::string name, int sign , int exec);
    // REGULAR FUNCTION
    const std::string GetName() const;
    const int GetSign() const;
    const int GetExec() const;
    bool GetSignStatus() const;
    void    beSigned(Bureaucrat person);
    class GradeTooHighException : public std::exception{
		public :
		const char *what();
	};
	class GradeTooLowException : public std::exception{
   		public :
   		const char *what();
	};
};
std::ostream& operator<<(Form form, std::ostream &stream);

#endif