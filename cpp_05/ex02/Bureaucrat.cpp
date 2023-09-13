/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajarouaslam <hajarouaslam@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 17:06:53 by hajarouasla      ###   ########.fr       */
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

Bureaucrat::Bureaucrat() : name(NULL) , grade(0){
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
        std::cout << this->getName() << " executed " << form.GetName();
        }
    catch(GradeTooHighException &exep){
        std::cout << "exep : " << exep.what();
    }
    catch(GradeTooLowException &exep){
        std::cout << "exep : " << exep.what();
    }
}
