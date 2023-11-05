/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:06 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/04 18:26:22 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
    std::cout << "RPN default constructor called!\n";
}

RPN::RPN(RPN& cpy){
    *this = cpy;
}

RPN::~RPN(){
    std::cout << "RPN destructore called!\n";
}

RPN& RPN::operator=(RPN& org){
    this->holder = org.holder;
    return *this;
}

void RPN::insert_nb(int nb){
    holder.push(nb);
}

void RPN::operation(char op){ 
    int s1 , s2;

    s1 = holder.top();
    holder.pop();
    s2 = holder.top();
    holder.pop();
    if (op == '+')
        insert_nb(s1+s2);
    else if (op == '*')
        insert_nb(s2*s1);
    else if (op == '-')
        insert_nb(s2-s1);
    else if (op == '/')
    {
        if (s1 == 0)
            throw std::out_of_range("operation can t be done\n");
        insert_nb(s2/s1);
    }
}

int RPN::result(void) const{
    return holder.top();
}

int RPN::_size(void) const{
    return holder.size();
}
