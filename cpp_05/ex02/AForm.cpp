/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:02:50 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:05:47 by hajarouasla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm(){
    // std::cout << "AForm default constructore called!\n";
}
AForm::AForm() : sign_grade(0), exec_grade(0), name(NULL), _sign(false){ 
    // std::cout << "AForm default constructore called!\n";
}
// AForm::AForm(const char*name, int sign , int exec) : 
// sign_grade(sign), exec_grade(exec), name(name), _sign(false){
//     if (sign_grade > 150 || exec_grade > 150)
//         throw GradeTooLowException();
//     if (sign_grade < 1 || exec_grade < 1)
//         throw GradeTooHighException();
//     // std::cout << "AForm parameter constructore called!\n";
// }
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

// std::ostream& operator<<(AForm Aform, std::ostream &stream){
//     stream << Aform.GetName() << "required " << Aform.GetSign() << " to be signed, and "
//     << Aform.GetExec() << " to be executed!\n"; 
//     return stream;
// }

// if the bureaucrat grade is higher than the Aform

void    AForm::beSigned(Bureaucrat person){
    if (person.getGrade() <= this->GetSign())
        this->_sign = true;
    else{
        this->_sign = false;
        throw GradeTooLowException();
    }
}
