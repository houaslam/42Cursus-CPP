/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/09/13 12:54:24 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::increment(){
    if (this->grade > 1)
        this->grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrement(){
        if (this->grade < 150)
            this->grade++;
        else
            throw GradeTooLowException();
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
    std::cout << "Bureaucrat Default constructor called!\n";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Destructor called!\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
    std::cout << "Bureaucrat Parameter constructor called!\n";
}

std::ostream& operator<<(std::ostream& out , Bureaucrat bureau){
    out << bureau.getName() <<" , bureaucrat grade " << bureau.getGrade() << " .\n";
    return out;
}
