/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/14 12:08:56 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(Form &form)
 : _sign(form._sign) , sign_grade(form.sign_grade) , exec_grade(form.exec_grade), name(form.name){
    std::cout << "Form Default constructore called!\n ";
}

Form::~Form(){
    // std::cout << "Form default constructore called!\n";
}

Form::Form() : sign_grade(0), exec_grade(0), name(""), _sign(false){ 
    // std::cout << "Form default constructore called!\n";
}

Form::Form(const char*name, int sign , int exec) : 
sign_grade(sign), exec_grade(exec), name(name), _sign(false){
    if (sign_grade > 150 || exec_grade > 150)
        throw GradeTooLowException();
    if (sign_grade < 1 || exec_grade < 1)
        throw GradeTooHighException();
    // std::cout << "Form parameter constructore called!\n";
}

const std::string Form::GetName() const{
    return this->name;
}

const int Form::GetSign() const{
    return this->sign_grade;
}

const int Form::GetExec() const{
    return this->exec_grade;
}

bool Form::GetSignStatus() const{
    return this->_sign;
}

std::ostream& operator<<(Form form, std::ostream &stream){
    stream << form.GetName() << "required " << form.GetSign() << " to be signed, and "
    << form.GetExec() << " to be executed!\n"; 
    return stream;
}

// if the bureaucrat grade is higher than the form

void    Form::beSigned(Bureaucrat person){
    if (person.getGrade() <= this->GetSign())
        this->_sign = true;
    else{
        this->_sign = false;
        throw GradeTooLowException();
    }
}
