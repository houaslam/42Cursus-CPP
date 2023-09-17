/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:53 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/14 11:15:43 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;


class GradeTooHighException : public std::exception{
    public :
    const char *what();
};

class GradeTooLowException : public std::exception{
    public :
    const char *what();
};

class Bureaucrat{
private :
    const std::string name;
    int grade;
public :
    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    void signForm(AForm &form);
    void executeForm(AForm const &form);
    //DESTRUCTOR AND CONSTRUCTORE
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat &to_cpy);
    Bureaucrat &operator=(Bureaucrat &src);
    Bureaucrat(const std::string name, int grade);
};
std::ostream& operator<<(std::ostream& out , Bureaucrat bureau);

#endif