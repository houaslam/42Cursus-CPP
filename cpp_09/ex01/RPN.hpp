/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:31 by houaslam          #+#    #+#             */
/*   Updated: 2023/11/04 18:23:22 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cmath>
#include <exception>
#include <stdlib.h>
#include <stack>

class RPN{
    private:
        std::stack<int> holder;
    public :
        RPN();
        RPN(RPN& cpy);
        ~RPN();
        RPN& operator=(RPN& org);

        void insert_nb(int nb);
        void operation(char op);
        int result(void) const;
        int _size(void) const;
};

#endif