/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/10/12 18:47:22 by houaslam         ###   ########.fr       */
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

const char *Bureaucrat::GradeTooHighException::what(){
    return "bureaucrat grade is too high\n";
}

const char *Bureaucrat::GradeTooLowException::what(){
        return "bureaucrat grade is too low\n";
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

Bureaucrat::Bureaucrat(Bureaucrat &to_cpy) : name(to_cpy.name){
    this->grade = to_cpy.grade;
    // std::cout << "Bureaucrat copy constructore called!\n";
}
