/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:20:51 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/28 17:10:45 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
    if (grade > 150 || grade < 1)
        throw "grade is invalid\n";
    this->grade = grade;
    std::cout << "Bureaucrat Parameter constructor called!\n";
}

std::ostream& operator<<(std::ostream& out , Bureaucrat bureau){
    out << bureau.getName() <<" , bureaucrat grade " << bureau.getGrade() << " .\n";
    return out;
}

