/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/13 14:05:03 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(AForm &form)
: _sign(form._sign) , sign_grade(form.sign_grade) , exec_grade(form.exec_grade), name(form.name){
    // std::cout << "AForm Default constructore called!\n ";
}

const char* AForm::FormNotSigned::what(){
    return "form not signed\n";
}

const char *AForm::GradeTooHighException::what(){
    return "form grade is too high\n";
}

const char *AForm::GradeTooLowException::what(){
        return "form grade is too low\n";
}


AForm::~AForm(){
    // std::cout << "AForm default constructore called!\n";
}

AForm::AForm() : sign_grade(0), exec_grade(0), name(""), _sign(false){ 
    // std::cout << "AForm default constructore called!\n";
}

AForm::AForm(const std::string name, int sign , int exec) : 
sign_grade(sign), exec_grade(exec), name(name), _sign(false){
    if (sign_grade > 150 || exec_grade > 150)
        throw AForm::GradeTooLowException();
    if (sign_grade < 1 || exec_grade < 1)
        throw AForm::GradeTooHighException();
    // std::cout << "AForm parameter constructore called!\n";
}

const std::string AForm::GetName() const{
    return this->name;
}

const int AForm::GetSign() const{
    return this->sign_grade;
}

const int AForm::GetExec() const{
    return this->exec_grade;
}

bool AForm::GetSignStatus() const{
    return this->_sign;
}

void    AForm::beSigned(Bureaucrat person){
    if (person.getGrade() <= this->GetSign())
        this->_sign = true;
    else{
        this->_sign = false;
        throw GradeTooLowException();
    }
}
