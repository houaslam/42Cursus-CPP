/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/29 17:21:55 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::increment(){
    if (this->grade > 1)
        this->grade--;
    else
        throw "grade is too high\n";
}

void Bureaucrat::decrement(){
        if (this->grade < 150)
            this->grade++;
        else
            throw "the grade is too low\n";
    }

const char *GradeTooHighException::what(){
    return "grade is too high\n";
}

const char *GradeTooLowException::what(){
        return "grade is too low\n";
}

std::string Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const{
    return this->grade;
}

Bureaucrat::Bureaucrat() : name("") , grade(0){
    // std::cout << "Bureaucrat Default constructor called!\n";
}

Bureaucrat::~Bureaucrat(){
    // std::cout << "Bureaucrat Destructor called!\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
    // std::cout << "Bureaucrat Parameter constructor called!\n";
}

std::ostream& operator<<(std::ostream& out , Bureaucrat bureau){
    out << bureau.getName() <<" , bureaucrat grade " << bureau.getGrade() << " .\n";
    return out;
}

void Bureaucrat::signForm(AForm &form){
    if (form.GetSignStatus() == true)
        std::cout << this->getName() << " signed " << form.GetName() << std::endl;
    else
        std::cout << this->getName() << " couldn t sign " << form.GetName() << " because the grade ain t enough\n";
}

void Bureaucrat::executeForm(AForm const &form){
    try{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.GetName() << std::endl;
        }
    catch(GradeTooHighException &exep){
        std::cerr << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cerr << "exep : " << exep.what();
    }
}

Bureaucrat::Bureaucrat(Bureaucrat &to_cpy) : name(to_cpy.name){
    this->grade = to_cpy.grade;
    std::cout << "Bureaucrat copy constructore called!\n";
}
